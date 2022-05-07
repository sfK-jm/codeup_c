// 어떤 정수가 입력되면 그 수가 7의 배수인지 확인하시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if ((num % 7) == 0)
        printf("multiple");
    else
        printf("not multiple");

    return 0;
}
