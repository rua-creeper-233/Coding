#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6 + 5;

// 定义一个数组 pre，用于存储前缀和
int pre[N][10];

// 定义一个数组 diff，用于存储数字的最大差值
int diff[10] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1};

// 将数字 n 各位数字的最大差值计算出来
int max_diff(int n) {
    int max_digit = -1, min_digit = 10;
    while (n) {
        int temp = n % 10;
        max_digit = max(max_digit, temp);
        min_digit = min(min_digit, temp);
        n /= 10;
    }
    // 如果 n 本身是一位数，那么差值就是该数本身
    if (max_digit == min_digit) return max_digit;
    // 如果 n 的最高位和最低位都是 1，那么直接返回 1
    if (min_digit == 1 && max_digit == n * 10 / 10) return 1;
    // 否则，返回 n 各位数字的最大差值
    return max_diff(max_digit - min_digit);
}

// 计算区间 [l, r] 内数字的最大差值，并输出该数字
void solve(int l, int r) {
    int res = -1, ans = l;
    // 计算 0~9 的数字的最大差值，并存储到数组 pre 中
    for (int i = 1; i <= 9; i++) {
        pre[0][i] = diff[i];
        for (int j = 1; j < N; j++)
            pre[j][i] = pre[j - 1][i] + max_diff(j * 10 / 10);
    }
    // 计算区间内数字的最高位和最低位，并比较它们之间的差值大小
    for (int i = l; i <= r; i++) {
        // 如果该数字各位数字的最大差值已被计算过，就直接使用预处理结果
        if (i < N && pre[i - 1][0]) {
            res = max(res, pre[i - 1][max_diff(i)]);
        } else {
            int d = max_diff(i);
            int sum = 0;
            for (int j = d; j <= 9; j++) {
                if (i >= N || !pre[i - 1][j]) {
                    int k = i * 10 / 10;
                    while (d--) k /= 10; // 找出数字的最高位
                    sum += diff[j] * k; // 使用前缀和进行加速计算
                } else {
                    sum += pre[i - 1][j]; // 直接使用预处理结果
                    break;
                }
            }
            res = max(res, sum);
        }
    }
    // 输出区间内数字的最大差值出现时的数字
    int maxn = 0;
    for (int i = l; i <= r; i++) {
        if (max_diff(i) == res && i > maxn) {
            maxn = i;
        }
    }
    cout << maxn << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        solve(l, r);
    }
    return 0;
}
