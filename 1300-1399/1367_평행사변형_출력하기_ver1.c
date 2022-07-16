// 평행사변형의 높이 n이 주어진다.
// 옆 면이 대각선으로 이루어지는 평행사변형을 출력한다.
// 단,공백은 왼쪽 위에 있다.

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num * 2 - 1; j++)
        {

            if ((i + j > num) && (i + j < num * 2 + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}