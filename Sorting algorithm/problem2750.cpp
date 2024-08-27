/*https://www.acmicpc.net/problem/2750, 수 정렬하기*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[1001];
    for (int i = 0 ; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num,num+n);
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}