/*https://www.acmicpc.net/problem/1436, 영화감독 숌*/
/*숫자는 항상 차례대로 만들어야함. 1666,2666,3666,4666,5666,6661,6662,6663,6664,6665,6666,6667, 6668, 6669, 7666,*/
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    int movieName = 665;
    string findString;
    for (int i = 0; i < num; i++)
    {
        while(1)
        {
            movieName++;
            findString = to_string(movieName);
            if (findString.find("666") != -1)
            {
                break;
            }
        }
    }
    cout << movieName;
    return 0;
}