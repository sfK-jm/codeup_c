// 길이 n이 입력되면 길이가 n인 사각형을 출력하시오.

// 단, 사각형은 * 모양으로 채운다.

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
