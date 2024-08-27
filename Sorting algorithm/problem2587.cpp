/*https://www.acmicpc.net/problem/2587, 대표값2*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[5];
    int avg = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        avg += num[i];
    }
    sort (num, num+5);
    cout << avg/5 << endl << num[2];
    return 0;
}