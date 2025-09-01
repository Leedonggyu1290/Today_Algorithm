#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int i;

bool compareStrings(string a, string b){
    if(a[i] == b[i]){
        return a < b;
    }
    else{
        return a[i] < b[i];
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string temp;
    
//    for(int i = 0; i < strings.size() - 1; i++){
//        for(int j = i + 1; j < strings.size(); j++){
//            if(strings[i][n] > strings[j][n]){
//               temp = strings[i];
//                strings[i] = strings[j];
//                strings[j] = temp;
//            }
//            else if(strings[i][n] == strings[j][n]){
//                if(strings[i] > strings[j]){
//                    temp = strings[i];
//                    strings[i] = strings[j];
//                    strings[j] = temp;
//                }
//            }
//        }
//    }
    i = n;
    
    sort(strings.begin(), strings.end(), compareStrings);
    
    return strings;
}