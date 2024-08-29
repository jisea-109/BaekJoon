/*https://www.acmicpc.net/problem/10989, 수 정렬하기3*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{  
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, vec;
    cin >> n;
    vector<int> count(10001);

    for (int i = 0; i < n; i++)
    {
        cin >> vec;
        count[vec]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            cout << i << "\n";
        }
    }
    return 0;
}