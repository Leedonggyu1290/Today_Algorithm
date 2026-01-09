#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1e9
typedef long long int ll;

ll N, K;

ll f(ll x) {
	ll count = 0;
	for (int i = 1; i <= N; i++) {
		if (x / i == 0)
			break;
		count += min(x / i, N);
	}
	return count;
}

int main() {
	cin >> N >> K;
	ll lo = 1, hi = MAX + 1;
	ll mid;
	while (lo + 1 <= hi) {
		mid = (lo + hi) / 2;
		if (f(mid) >= K)
			hi = mid;
		else
			lo = mid + 1;
	}
	cout << lo << '\n';
}