// 프로그램은 다음과 같이 진행된다.
// 1. n이 입력된다.(3<=n<=100)
// 2.대각선이 포함된 n*n사각형을 출력한다.
// 입력예시) -> 9
// 출력예시
// *********
// **     **
// * *   * *
// *  * *  *
// *   *   *
// *  * *  *
// * *   * *
// **     **
// *********

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {

            if ((i == 1) || (j == 1) || (i == num) || (j == num) || (i == j) || (i + j == num + 1))
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