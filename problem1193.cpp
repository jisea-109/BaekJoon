/* https://www.acmicpc.net/problem/1193 분수찾기

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 1)
    {
        cout << "1/1";
        return 0;
    }
    int N = 1; // denominator, 분모
    int temp = 4;
    int count = 1;
    int inc = 0;
    while(count < num)
    {
        if (N % 2 == 1)
        {
            count = count + temp * inc;
            inc++;
            N++;
        }
        else if (N % 2 == 0)
        {
            count++;
            N++;
        }
    }
    N--;
    if (count == num)
    {
        cout << 1 << "/" << N;
        return 0;
    }
    else
    {
        int numerator = 1; // 분자
        int flag = 0;
        if (N % 2 == 0)
        {
            N--;
            count--;
        }
        
        while(numerator > 0)
        {
            if (count == num)
            {
                cout << numerator << "/" << N;
                break;
            }
            if (flag == 0)
            {
                N--;
                numerator++;
                count--;
                if(N == 1)
                {
                    if (count == num)
                    {
                        cout << numerator << "/" << N;
                        break;
                    }
                    flag = 1;
                    count--;
                    numerator--;
                }       
            }
            else if (flag == 1)
            {
                count--;
                N++;
                numerator--;
            }
        }
    }
    return 0;
}