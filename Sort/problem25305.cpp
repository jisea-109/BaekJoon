/*https://www.acmicpc.net/problem/25305, 커트라인*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num, won_num;
    cin >> num >> won_num; 
    int arr[1001];
    for(int i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }

    sort(arr, arr + num);
    cout << arr[num-won_num];
}