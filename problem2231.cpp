/*https://www.acmicpc.net/problem/2231, 분해합*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        int n = i;
        int temp = i;

        while (n > 0)
        {
            temp += n % 10;
            n /= 10;
        }
        if (temp == num)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;

    return 0;
}