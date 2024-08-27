/*https://www.acmicpc.net/problem/2751, 수 정렬하기2*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, vec;
    cin >> n;
    vector<int> num; // maximum size of int array is 250k, whereas vector is 100 Million
    for (int i = 0 ; i < n; i++)
    {
        cin >> vec;
        num.push_back(vec);
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << "\n"; // endl flushes the output buffer and \n doesn't. 
    }
    return 0;
}