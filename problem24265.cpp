/*https://www.acmicpc.net/problem/24265 알고리즘 수업 - 알고리즘의 수행 시간 4*/
#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    
    /*for (int i = 1; i <= num - 1; i++)
    {
        for (int j = i+1; j <= num; j++)
        {
            count++;
        }
    }*/
    cout << num*(num-1)/2 << endl;
    cout << "2";
    return 0;
}