#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int MAX_N = 1e7;
bool isErased[MAX_N + 1];
int main()
{
	ll A, B;
	cin >> A >> B;
	isErased[0] = true;
	isErased[1] = true;

	for (ll p = 2; p <= MAX_N; ++p)
	{
		if(isErased[p])
			continue;
		for (ll j = p * p; j <= MAX_N; j += p)
		{
			isErased[j] = true;
		}
	}

	ll count = 0;
	for (ll p = 2; p * p <= B; p = p + 1)
	{
		if (!isErased[p])
		{
			for (ll k = p; p <= B / k; k = k * p)
			{
				if (k * p >= A) count = count + 1;
			}
		}
	}

	cout << count << '\n';
}