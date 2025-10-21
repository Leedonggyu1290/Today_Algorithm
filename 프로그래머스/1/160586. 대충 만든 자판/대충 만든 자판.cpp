#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cassert>

using namespace std;
#define ll long long
#define tl tuple<ll,ll,ll>
#define pii pair<ll, ll>

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> minkey(100, 200);
    for (string str : keymap) {
        assert(str.size() <= 100);
        for (int i = 0; i < str.size(); i++) {
            minkey[str[i]] = min(minkey[str[i]], i + 1);
        }
    }

    vector<int> answer;

    for (string str : targets) {
        assert(str.size() <= 100);
        int cnt = 0;
        for (char c : str) {
            cnt += minkey[c];
            if (minkey[c] == 200) {
                cnt = -1;
                break;
            }
        }
        answer.push_back(cnt);
    }

    return answer;
}
