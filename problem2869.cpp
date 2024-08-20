/*https://www.acmicpc.net/problem/2869 달팽이는 올라가고 싶다*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int climb, slip, height;
    cin >> climb >> slip >> height;

    int count=0;
    int distancePerDay=climb-slip;
    if (height < climb)
    {
        cout << 1;
    }
    else
    {
        if((height-climb)%distancePerDay == 0)
        {
            cout << (height-climb)/distancePerDay+1;
        }
        else
        {
            cout << (height-climb)/distancePerDay+2;
        }
    }
    return 0;
}