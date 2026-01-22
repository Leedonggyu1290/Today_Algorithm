#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D, E;
	int cnt = 0;
	bool isIce = false;

	cin >> A >> B >> C >> D >> E;

	if (A < 0)
	{
		int dif = 0 - A;
		isIce = true;
		A = 0;
		cnt += C * dif;
	}

	if (A == 0 && isIce == true)
	{
		isIce = false;
		cnt += D;
	}

	if (A >= 0 && isIce == false)
	{
		int dif = B - A;
		cnt += E * dif;
	}

	cout << cnt << '\n';
}