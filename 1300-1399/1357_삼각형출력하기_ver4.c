// n이 입력되면 다음 삼각형을 출력하시오.

// 예) n = 4

// *
// **
// ***
// ****
// ***
// **
// *

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num * 2; i++)
    {
        if (i <= num)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int k = i; k < num * 2; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
