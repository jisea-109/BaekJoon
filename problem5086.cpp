/*https://www.acmicpc.net/problem/5086 배수와 약수*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    while (1)
    {
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0)
        {
            break;
        }
        if (num1 % num2 == 0)
        {                
            cout << "multiple" << endl;
        }
        else if (num2 % num1 == 0)
        {
            cout << "factor" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }
    return 0;
}