#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m, a;
	int arr[100001];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	
	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> a;
		if (binary_search(arr, arr + n, a)) {
			cout << '1' << '\n';
		}
		else {
			cout << '0' << '\n';
		}
	}
}