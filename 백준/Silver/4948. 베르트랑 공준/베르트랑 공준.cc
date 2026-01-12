#include <iostream>
#include <vector>

using namespace std;
const int MAX_N = 123456;
bool isErased[MAX_N * 2 + 1];

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			break;
		}

		isErased[0] = true;
		isErased[1] = true;
		for (int i = 2; i * i <= 2 * n; ++i)
		{
			if (isErased[i])
			{
				continue;
			}
			for (int j = i * i; j <= 2 * n; j += i)
			{
				isErased[j] = true;
			}
		}

		int count = 0;
		for (int k = n + 1; k <= 2 * n; k++)
		{
			if (!isErased[k])
			{
				count++;
			}
		}

		cout << count << '\n';
	}
}