// 길이 n이 입력되면 역삼각형을 출력한다.

// 예)

// n이 5이면

// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}