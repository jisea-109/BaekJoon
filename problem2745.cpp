/*https://www.acmicpc.net/problem/2745 진법 변환 2
B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.

A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35

입력
첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)

B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.

출력
첫째 줄에 B진법 수 N을 10진법으로 출력한다.
*/
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int convertCharToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    }
    return -1;
}

int main() {
    string N;
    int B;
    cin >> N >> B;

    int decimalValue = 0;
    int length = N.length();

    for (int i = 0; i < length; i++) {
        int value = convertCharToValue(N[i]);
        decimalValue += value * pow(B, length - 1 - i);
    }

    cout << decimalValue << endl;

    return 0;
}