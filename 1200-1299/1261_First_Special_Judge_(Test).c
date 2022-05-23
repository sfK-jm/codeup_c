// 10개의 수가 입력된다.
// 10개의 수 중 5의 배수를 하나만 출력한다.
// 만약 5의 배수가 없다면 0을 출력한다.

#include <stdio.h>

int main()
{

    int a, b[10];

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a);
        b[i] = a;
    }

    int flag = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (b[i] % 5 == 0)
        {
            printf("%d", b[i]);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("0");
    }

    return 0;
}
