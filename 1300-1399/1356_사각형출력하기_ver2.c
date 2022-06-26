// 길이 n이 입력되면 다음과 같은 사각형을 출력한다.

// 예)

// n이 5일때

// *****
// *   *
// *   *
// *   *
// *****

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((j == 1 || j == num) || (i == 1 || i == num))
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
