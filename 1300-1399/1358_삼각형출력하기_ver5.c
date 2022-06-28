// 어떤 수 n을 입력받으면 다음과 같은 삼각형을 출력한다.

// 여기서 입력되는 n은 반드시 홀수이다.

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);
    int space = (num - 1) / 2;
    for (int i = 1; i <= num; i += 2)
    {
        if (num % 2 == 1)
        {
            for (int j = 1; j <= space; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
            space--;
        }
    }

    return 0;
}
