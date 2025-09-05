#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string r = "";
    
   for(int i = 1; i < food.size(); i++){
       for(int j = 0; j < food[i] / 2; j++){
           answer += to_string(i);
       }
   }
    
    r = answer + "0";
    
    reverse(r.begin(), r.end());
    
    return answer + r;
}