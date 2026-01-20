#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n;
	int cnt = 0;
	string s;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		map<char, int> m;
		bool bIsGroup = true;

		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (m.empty())
			{
				m.insert({ s[j], 1 });
			}
			else
			{
				if (s[j] != s[j - 1])
				{
					if (m.find(s[j]) != m.end())
					{
						bIsGroup = false;
						break;
					}
					else
					{
						m.insert({ s[j], 1 });
					}
				}
			}
		}

		if (bIsGroup)
		{
			cnt++;
		}
	}

	cout << cnt << '\n';
}