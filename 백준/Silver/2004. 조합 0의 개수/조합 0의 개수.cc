#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll cnt2 = 0;
ll cnt5 = 0;
void f1(ll N)
{
	ll k = 2;
	while (k <= N)
	{
		cnt2 += N / k;
		k *= 2;
	}
	k = 5;
	while (k <= N)
	{
		cnt5 += N / k;
		k *= 5;
	}
}
void f2(ll N1, ll N2)
{
	ll k = 2;
	while (k <= N1)
	{
		cnt2 -= N1 / k;
		k *= 2;
	}
	k = 2;
	while (k <= N2)
	{
		cnt2 -= N2 / k;
		k *= 2;
	}
	k = 5;
	while (k <= N1)
	{
		cnt5 -= N1 / k;
		k *= 5;
	}
	k = 5;
	while (k <= N2)
	{
		cnt5 -= N2 / k;
		k *= 5;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	ll n, m;
	cin >> n >> m;
	f1(n);
	f2(m, (n - m));
	if (min(cnt2, cnt5) <= 0)
	{
		cout << '0' << '\n';
	}
	else
	{
		cout << min(cnt2, cnt5) << '\n';
	}
}