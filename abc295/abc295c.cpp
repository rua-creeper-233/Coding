#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	int arr[x];
	for (int i = 0; i < x; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + x);
	int ans = 0;
	for (int i = 0; i < x; i++) {
		if (arr[i] == arr[i + 1]) {
			ans++;
			i++;
		}
	}
	cout << ans;

	return 0;
}
