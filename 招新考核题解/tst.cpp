#include<bits/stdc++.h>

using namespace std;
int n;

int main() {
    cin >> n;
    while (n--) {
        string temp;
        cin >> temp;
        int card[14];
        memset(card, 0, sizeof(card));
        for (int i = 0; i < 4; i++) {
            if (temp[i] == 'A') {
                card[1]++;
            }
            if (temp[i] == 'J') {
                card[11]++;
            }
            if (temp[i] == 'Q') {
                card[12]++;
            }
            if (temp[i] == 'K') {
                card[13]++;
            }
            if (temp[i] == 'X') {
                card[10]++;
            }
            if(temp[i]>'1'&&temp[i]<='9') card[temp[i] - '0']++;
        }
        int maxx = -1;
        int minn = 5;
        for (int i = 1; i <= 13; i++) {
            maxx = max(card[i], maxx);
            if (card[i]) minn = min(card[i], minn);
        }
        if (maxx == 3 && minn == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}