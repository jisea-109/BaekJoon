/*https://www.acmicpc.net/problem/19532, 수학은 비대면강의입니다*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    // ax + by = c => aex + bey = ce or dax + dby = dc
    // dx + ey = f => bdx + bey = bf or adx + aey = af
    // (c*e-b*f)x = (a*e-b*d) or (d*b - a*e)y = (d*c - a*f)
    int x = (c * e - b * f) / (a * e - b * d);
    int y = (c*d-a*f)/(b*d-a*e);
    cout << x << " " << y;
    return 0;
}
