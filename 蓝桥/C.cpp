#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int solve(int n) {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cnt = 0;
    do {
        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            if (isPrime(numbers[i] + numbers[i + 1])) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cnt++;
        }
    } while (next_permutation(numbers.begin(), numbers.begin() + n));

    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    double st = clock();
    int ans = solve(n);
    double ed = clock();
    cout << ans << endl;
    return 0;
}

//
// Created by Invalid_index on 2023/12/2.
//
