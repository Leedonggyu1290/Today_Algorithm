#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 0;
    
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[min])
            min = i;
    }
    arr.erase(arr.begin() + min);

    if(arr.size() == 0)
        arr.push_back(-1);
    
    return arr;
}