#include<bits/stdc++.h>

using namespace std;

int main() {
    long long l = 1, r = 1000000000, mid;
    while (l <= r) {
        mid = (l + r) >> 1;
        cout << mid << endl;
        int cpu;
        cin >> cpu;
        if (cpu == -1)
            l = mid + 1;
        else if (cpu == 1) {
            r = mid - 1;
        } else if (cpu == 0) {
            return 0;
        }
    }
    return 0;
}
//
// Created by Invalid_index on 2024/1/5.
//
