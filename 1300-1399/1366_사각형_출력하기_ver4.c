// 대각선과 테두리가 그려진 사각형에 가로, 세로 중심에 선을 추가한 사각형을 출력한다.
// 입력 예시 17
// 출력 예시
// *****************
// **      *      **
// * *     *     * *
// *  *    *    *  *
// *   *   *   *   *
// *    *  *  *    *
// *     * * *     *
// *      ***      *
// *****************
// *      ***      *
// *     * * *     *
// *    *  *  *    *
// *   *   *   *   *
// *  *    *    *  *
// * *     *     * *
// **      *      **
// *****************

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= num; j++)
        {

            if ((i == 1) || (j == 1) || (i == num) || (j == num) || (i == j) || (i + j == num + 1) || (i == num / 2 + 1) || (j == num / 2 + 1))
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
