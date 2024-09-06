/*https://www.acmicpc.net/problem/1427, 소트인사이드*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}
int main()
{
    int num, N, count = 0;
    cin >> num;
    N = num;
    while(N != 0)
    {
        N = N / 10;
        count++;
    }
    int digit[count];
    for (int i = 0; i < count; i++)
    {
        int pow1 = pow(10,i+1);
        int pow2 = pow(10,i);
        digit[i] = (num % pow1) / pow2;
    }
    sort(digit, digit+count, comp);
    for (int i = 0; i < count; i++)
    {
        cout << digit[i];
    }
    return 0;
}