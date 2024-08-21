/*https://www.acmicpc.net/problem/24267 알고리즘 수업 - 알고리즘의 수행 시간 6*/
#include <iostream>
using namespace std;

int main()
{
    long long num;
    cin >> num;
    cout << num*(num-1)*(num-2)/6 << endl << "3";
    return 0;
}


/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2 => n
        for j <- i + 1 to n - 1 => n-1
            for k <- j + 1 to n => n-2
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}
n(n-1)(n-2)



*/