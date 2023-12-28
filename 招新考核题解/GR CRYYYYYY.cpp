#include<cstdio>

int main() {
    int n;
    int num[10];
    int minn = 10;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++) num[i] = 0;
    for (int i = 1; i <= n; i++) {
        int temp;
        if (temp < minn && temp) minn = temp;
        scanf("%d", &temp);
        num[temp]++;
    }
    printf("%d", minn);
    num[minn]--;
    for (int i = num[0]; i >= 1; i--) printf("%d", 0);
    for (int i = minn; i <= 9; i++) {
        for (int j = num[i]; j >= 1; j--) {
            printf("%d", i);
        }
    }
    return 0;
}