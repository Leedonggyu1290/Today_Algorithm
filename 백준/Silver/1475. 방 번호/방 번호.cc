#include <iostream>
using namespace std;

int n;
int arr[10];

int main()
{
	cin >> n;

	if (n == 0)
	{
		cout << 1 << '\n';
		return 0;
	}

	while (n != 0)
	{
		arr[n % 10]++;
		n /= 10;
	}
	int max = 0;
	for (int i = 0; i <= 8; ++i)
	{
		if (i == 6)
		{
			continue;
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	if (max < (arr[6] + arr[9] + 1) / 2)
	{
		max = (arr[6] + arr[9] + 1) / 2;
	}
	cout << max << '\n';
}