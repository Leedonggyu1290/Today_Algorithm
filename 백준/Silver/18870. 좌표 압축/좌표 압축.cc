#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N = 0;
int arr[1000001];
vector<int> v;

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		v.push_back(arr[i]);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < N; i++)
	{
		int idx = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
		cout << idx << " ";
	}
}