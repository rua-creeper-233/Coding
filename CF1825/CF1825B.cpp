#include<bits/stdc++.h>

using namespace std;
int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) {
        int n, m, count = 0, way, maxleft = -1, maxright = m + 1, temp[100005], count1 = 0, count2 = 0;
        bool seat[10005];
        memset(seat, 0, sizeof(seat));
        cin >> n >> m;
        int mid = m / 2;
        int maxmid = -1, minmid = 10005, nearmid = 0;
        for (int i = 1; i <= n; i++) {
            cin >> temp[i];
            if (temp[i] == -1) {
                count1++;
            }
            if (temp[i] == -2) {
                count2++;
            }
            if (temp[i] > mid) {
                maxmid = min(temp[i], maxmid);
            }
            if (temp[i] < mid) {
                minmid = max(temp[i], minmid);
            }
        }
        nearmid = min(maxmid - mid, mid - minmid) + mid;
        if(count1+count2>m){
            if((count2!=0&&count1>m)||(count2>m&&count1!=0)){
                count=m;
            }
        }
//        sort(temp + 1, temp + 1 + n);
//        for (int i = 1; i <= n; i++) {
//            way = temp[i];
//            if (way == -1) {
//                if (maxleft == 1) {
//                    continue;
//                } else if (maxleft == -1) {
//                    seat[m] = true;
//                    maxleft = m;
//                    count++;
//                } else {
//                    maxleft--;
//                    seat[maxleft] = true;
//                    count++;
//                }
//            }
//            if (way == -2) {
//                if (maxright == m) {
//                    continue;
//                } else if (maxright == m + 1) {
//                    seat[1] = true;
//                    maxright = 1;
//                    count++;
//                } else {
//                    maxright++;
//                    seat[maxright] = true;
//                    count++;
//                }
//            }
//            if (way > 0) {
//                if (seat[way]) {
//                    continue;
//                } else {
//                    seat[way] = true;
//                    count++;
//                    maxright = max(maxright, way);
//                    maxleft = min(maxleft, way);
//                }
//            }
//        }
        cout << count << endl;
    }
    return 0;
}