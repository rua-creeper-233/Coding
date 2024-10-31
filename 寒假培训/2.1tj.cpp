#include <bits/stdc++.h>

using namespace std;

int ans = 0, n, k, a[20];
string temp;

bool prime(int x) {
    int i;
    for (i = 2; i <= floor(sqrt(x)); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

//上面判素数不解释
void rec(int start, int count, int sum) {
    //rec：递归英文recursion缩写
    //start：开始选数的地方
    //count：已经选了几个数
    //sum：到目前为止选的数的和

    int i;
    if (count == k) {
        cout << temp << endl;
        temp = " ";
        temp += (char) ans;
    }
    if (count == k && prime(sum)) {
        ans++;
        //如果已经选了k个数，判断和是不是素数
        //ans是符合条件的和的个数
    }

    for (i = start; i <= n; i++) {
        //从开始选数的地方到n
        //每重循环都是一种可能性
        //例如：选第二个数，start=2,n=4,有三种可能性，调用自身3次
        temp += (char) a[i];

        rec(i + 1, count + 1, sum + a[i]);

        //参数1：从a里面下一个数开始选
        //参数2：已经选的数的个数+1
        //参数3：sum加上这次选的数

        //因为直接从下一个数开始选，所以不可能选到之前选过的数
        //无需判断当前的数是否被选过
    }
}

int main() {

    int i;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    rec(1, 0, 0);
    //从第一个数开始找，已经找了0个数，目前的和是0
    cout << ans << endl;
    return 0;
}
//
// Created by Invalid_index on 2024/2/1.
//
