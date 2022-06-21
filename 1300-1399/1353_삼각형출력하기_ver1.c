// n이 입력되면 다음과 같은 삼각형을 출력하시오.
// 예)
// n 이 5 이면
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
