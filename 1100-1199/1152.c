// 10보다 작은 정수가 입력되면 small 을 출력, 그 이상의 수가 입력되면 big 을 출력하시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num < 10)
    {
        printf("small");
    }
    else
    {
        printf("big");
    }

    return 0;
}
