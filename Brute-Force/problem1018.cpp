/*https://www.acmicpc.net/problem/1018, 체스판 다시 칠하기*/

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M; // W = white, B = black
    cin >> N >> M;
    char square[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> square[i][j];
        }
    }
    int result = 64;
    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            int temp1 = 0, temp2 = 0;
            for (int x = i; x < i + 8; x++)
            {
                for (int y = j; y < j + 8; y++)
                {
                    if (((x-i + y-j) % 2 == 0))
                    {
                        if (square[x][y] != 'W')
                        {
                            temp1 += 1;
                        }
                    }
                    else
                    {
                        if (square[x][y] != 'B')
                        {
                             temp1 += 1;
                        }
                    }
                }
            }
            for (int x = i; x < i + 8; x++)
            {
                for (int y = j; y < j + 8; y++)
                {
                    if (((x-i + y-j) % 2 == 0))
                    {
                        if (square[x][y] != 'B')
                        {
                            temp2 += 1;
                        }
                    }
                    else
                    {
                        if (square[x][y] != 'W')
                        {
                            temp2 += 1;
                        }
                    }
                }
            }
            if (temp1 >= temp2)
            {
                if (result > temp2)
                {
                    result = temp2;
                }
            }
            else if (temp2 >= temp1)
            {
                if (result > temp1)
                {
                    result = temp1;
                }
            }
        }
    }
    cout << result;
    return 0;
}