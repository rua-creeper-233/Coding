#include<bits/stdc++.h>

using namespace std;
#define ll long long
struct tree {
    int l, r;
    long long sum, lazy_tag;
};

const int maxn = 1e5 + 5;
tree t[4 * maxn + 3];
int a[maxn + 3];

void build(int position, int l, int r) {
    t[position].l = l;
    t[position].r = r;
    if (l == r) {
        t[position].sum = a[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(position * 2, l, mid);
    build(position * 2 + 1, mid + 1, r);
    t[position].sum = t[position * 2].sum + t[position * 2 + 1].sum;//建树时，当前节点的和为左右子节点的和
}//建树

void spread(int position) {
    if (t[position].lazy_tag) {//有就传递，没有就不传递
        t[position * 2].sum += t[position].lazy_tag * (t[position * 2].r - t[position * 2].l + 1);
        t[position * 2 + 1].sum += t[position].lazy_tag * (t[position * 2 + 1].r - t[position * 2 + 1].l + 1);
        t[position * 2].lazy_tag += t[position].lazy_tag;
        t[position * 2 + 1].lazy_tag += t[position].lazy_tag;
        t[position].lazy_tag = 0;//向下传递后父节点lazy_tag清零
    }
}//传递lazy_tag

void change(int position, int l, int r, int k) {
    if (l <= t[position].l && r >= t[position].r) {//如果当前区间被包含在修改区间内，直接修改当前区间的和
        t[position].sum += (ll) k * (t[position].r - t[position].l + 1);
        t[position].lazy_tag += k;
        return;
    }
    spread(position);//传递lazy_tag
    int midd = (t[position].l + t[position].r) >> 1;//对于线段树上进行修改时，使用树上的区间来判断
    if (l <= midd) change(position * 2, l, r, k);
    if (r > midd) change(position * 2 + 1, l, r, k);
    t[position].sum = t[position * 2].sum + t[position * 2 + 1].sum;
}//区间更改&更新lazy_tag

long long ask(int position, int l, int r) {
    if (l <= t[position].l && r >= t[position].r) return t[position].sum;//如果当前区间被包含在查询区间内，直接返回当前区间的和
    spread(position);//传递lazy_tag
    int midd = (t[position].l + t[position].r) >> 1;
    long long ans = 0;
    if (l <= midd) ans += ask(position * 2, l, r);
    if (r > midd) ans += ask(position * 2 + 1, l, r);
    return ans;
}//用递归区间查询

/*void scan(int n) {
    for (int i = 1; i <= n * 2; i++) {
        cout << t[i].l << "," << t[i].r << " ";
    }
    cout << endl;
    return;
}
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--) {
        int op, x, y, k;
        cin >> op >> x >> y;
        if (op == 1) {
            cin >> k;
            change(1, x, y, k);

        } else {
            cout << ask(1, x, y) << endl;
        }
    }
    return 0;
}