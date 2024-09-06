/*https://www.acmicpc.net/problem/1427, 소트인사이드*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int a, b;
    vector<pair<int, int> > v;
    for (int i = 0; i < num; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < num; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}