#include <stdio.h>
#include <iostream>

using namespace std;

int dp[46];

int fib(int n) {
	if (dp[n] != -1)
		return dp[n];

	return dp[n] = fib(n - 1) + fib(n - 2);
}

int main() {
	int n = 0;
	
	for (int i = 0; i <= 45; i++) {
		dp[i] = -1;
	}

	dp[0] = 0;
	dp[1] = 1;

	cin >> n;

	cout << fib(n) << endl;
}