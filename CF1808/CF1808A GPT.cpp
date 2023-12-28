#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e6 + 5;

// ����һ������ pre�����ڴ洢ǰ׺��
int pre[N][10];

// ����һ������ diff�����ڴ洢���ֵ�����ֵ
int diff[10] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1};

// ������ n ��λ���ֵ�����ֵ�������
int max_diff(int n) {
    int max_digit = -1, min_digit = 10;
    while (n) {
        int temp = n % 10;
        max_digit = max(max_digit, temp);
        min_digit = min(min_digit, temp);
        n /= 10;
    }
    // ��� n ������һλ������ô��ֵ���Ǹ�������
    if (max_digit == min_digit) return max_digit;
    // ��� n �����λ�����λ���� 1����ôֱ�ӷ��� 1
    if (min_digit == 1 && max_digit == n * 10 / 10) return 1;
    // ���򣬷��� n ��λ���ֵ�����ֵ
    return max_diff(max_digit - min_digit);
}

// �������� [l, r] �����ֵ�����ֵ�������������
void solve(int l, int r) {
    int res = -1, ans = l;
    // ���� 0~9 �����ֵ�����ֵ�����洢������ pre ��
    for (int i = 1; i <= 9; i++) {
        pre[0][i] = diff[i];
        for (int j = 1; j < N; j++)
            pre[j][i] = pre[j - 1][i] + max_diff(j * 10 / 10);
    }
    // �������������ֵ����λ�����λ�����Ƚ�����֮��Ĳ�ֵ��С
    for (int i = l; i <= r; i++) {
        // ��������ָ�λ���ֵ�����ֵ�ѱ����������ֱ��ʹ��Ԥ������
        if (i < N && pre[i - 1][0]) {
            res = max(res, pre[i - 1][max_diff(i)]);
        } else {
            int d = max_diff(i);
            int sum = 0;
            for (int j = d; j <= 9; j++) {
                if (i >= N || !pre[i - 1][j]) {
                    int k = i * 10 / 10;
                    while (d--) k /= 10; // �ҳ����ֵ����λ
                    sum += diff[j] * k; // ʹ��ǰ׺�ͽ��м��ټ���
                } else {
                    sum += pre[i - 1][j]; // ֱ��ʹ��Ԥ������
                    break;
                }
            }
            res = max(res, sum);
        }
    }
    // ������������ֵ�����ֵ����ʱ������
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
