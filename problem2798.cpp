/*https://www.acmicpc.net/problem/2798, 블랙잭*/
#include <iostream>
using namespace std;

int main()
{
    int num, sum;
    cin >> num >> sum;

    int cardNum[num];
    for (int i = 0; i < num; i++)
    {
        cin >> cardNum[i];
    }

    int result = 0;
    int m = 0;
    for (int i = 0; i < num-2; i++)
    {
        for (int j = i+1; j < num-1; j++)
        {
            for (int z = j+1; z < num; z++)
            {
                m = cardNum[i] + cardNum[j] + cardNum[z];
                if (m > result && m <= sum)
                {
                    result = m;
                }
            }
        }
    }
    cout << result;
    return 0;

}