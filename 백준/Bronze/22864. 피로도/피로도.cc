#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, M = 0, stress = 0;
	double workAmount = 0;

	cin >> A >> B >> C >> M;

	if (M < A)
	{
		cout << workAmount << '\n';
	}
	else
	{
		for (int i = 0; i < 24; i++)
		{
			if (stress + A <= M)
			{
				stress += A;
				workAmount += B;
			}
			else
			{
				stress -= C;
				if (stress < 0)
				{
					stress = 0;
				}
			}
		}

		cout << workAmount << '\n';
	}
}