// L=왼쪽 아래에 공백
// R=오른쪽 아래에 공백
// 다음 조건에 맞춰 평행사변형을 출력한다.
// 높이 h와 밑변 k, 방향 정보 d가 한줄로 공백으로 분리되어 입력된다

#include <stdio.h>

int main()
{

    int h, k;
    char d;
    scanf("%d %d %c", &h, &k, &d);

    for (int i = 1; i <= h; i++)
    {

        for (int j = 1; j <= h + k - 1; j++)
        {

            if (d == 'R')
            {
                if ((i + j > h) && (i + j < h + k + 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                int m = 2 * (i - 1) + 1;
                if (i + j > m && i + j < k + m + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}