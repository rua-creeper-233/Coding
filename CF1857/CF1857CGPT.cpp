#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int size = n * (n - 1) / 2;
        vector<int> b(size);

        for (int i = 0; i < size; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a(n);
        int idx = 0;

        for (int i = 0; i < n - 1; i++) {
            a[i] = b[idx++];
        }

        a[n - 1] = b[size - 1];

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}