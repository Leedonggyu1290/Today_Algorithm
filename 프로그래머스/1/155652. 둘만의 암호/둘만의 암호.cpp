#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < index; j++)
        {
            s[i] += 1;
            if (s[i] > 'z')
                s[i] = 'a';
            for (int k = 0; k < skip.length(); k++)
            {
                if (s[i] == skip[k])
                    j--;
            }
        }
    }
    answer += s;
    return answer;
}