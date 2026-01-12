#include <utility>
#include <iostream>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq_plus;
priority_queue<int> pq_minus;

int main() {
	int N;
	cin >> N;

	while (N--) {
		ios::sync_with_stdio(0); cin.tie(0);
		int x;
		cin >> x;
		if (x == 0) {
			if (pq_plus.empty() && pq_minus.empty())
				cout << 0 << '\n';
			else if (pq_plus.empty()) {
				cout << pq_minus.top() << '\n';
				pq_minus.pop();
			}
			else if (pq_minus.empty()) {
				cout << pq_plus.top() << '\n';
				pq_plus.pop();
			}
			else {
				if (pq_plus.top() >= pq_minus.top() * (-1)) {
					cout << pq_minus.top() << '\n';
					pq_minus.pop();
				}
				else {
					cout << pq_plus.top() << '\n';
					pq_plus.pop();
				}
			}
		}
		else {
			if (x > 0)
				pq_plus.push(x);
			else
				pq_minus.push(x);
		}
	}
}