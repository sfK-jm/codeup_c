// n이 입력되면 n층의 별 계단을 출력하시오.

// 예) n= 5인 경우,

// **
//  **
//   **
//    **
//     **

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);
    int space = 0;
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        printf("**\n");
        space++;
    }

    return 0;
}