/*
https://www.acmicpc.net/problem/24313 알고리즘 수업 - 점근적 표기 1
O(g(n)) = {f(n) | 모든 n ≥ n0에 대하여 f(n) ≤ c × g(n)인 양의 상수 c와 n0가 존재한다.
함수 f(n) = a1*n + a0, 양의 정수 c, n0 g(n) = n
*/
#include <iostream>
using namespace std;

int main()
{
    int a1, a0; /*a1, a0*/
    cin >> a1 >> a0;
    int c, n0; /*c , n0*/
    cin >> c;
    cin >> n0;
    int flag = 0;
    for (int i = 100; i >= n0; i--)
    {
        if(a1 * i + a0 > c * i)
        {
            cout << "0";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "1";
    }
    return 0;
}