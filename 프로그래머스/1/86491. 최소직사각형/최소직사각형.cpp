#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_w = 0;
    int max_h = 0;
    
    for(int i = 0; i < sizes.size(); i++){
        max_w = max(max_w, max(sizes[i][0], sizes[i][1]));
        max_h = max(max_h, min(sizes[i][0], sizes[i][1]));
    }
    
    return max_w * max_h;
}