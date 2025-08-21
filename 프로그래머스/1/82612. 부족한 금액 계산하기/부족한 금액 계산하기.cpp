using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    //가우스
    answer = (long long)(count * (count + 1) / 2) * price;
    
    if(answer > money)
        answer -= money;
    else
        return 0;
    
    return answer;
}