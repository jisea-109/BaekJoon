/*https://www.acmicpc.net/problem/2839, 설탕 배달*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count = 0;
    while(num >= 0)
    {
        if (num % 5 == 0)
        {
            count += num / 5;
            cout << count << endl;
            return 0;
        }
        num -= 3;
        count++;
    }
    cout << -1 << endl;
    return 0;
}
