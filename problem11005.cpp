/*https://www.acmicpc.net/problem/11005 진법 변환 2

10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

입력
첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36) N은 10억보다 작거나 같은 자연수이다.

출력
첫째 줄에 10진법 수 N을 B진법으로 출력한다.*/
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    long long beforeConverted;
    int base;
    cin >> beforeConverted >> base;
    char result[100];
    int i = 0;
    while (beforeConverted > 0)
    {
        int ascii = beforeConverted % base;
        if (ascii >= 0 && ascii <= 9)
        {
            ascii += '0';
        }
        else if (ascii >= 10 && ascii <= 35)
        {
            ascii = ascii - 10 + 'A';
        }
        char converted = char(ascii);
        result[i] = converted;
        beforeConverted /= base;
        i++;
    }
    for (int j = i-1; j >= 0; j--)
    {
        cout << result[j];
    }
    return 0;
}