// 10보다 작은 수가 입력되면 small 을 출력, 10이상이면 아무것도 출력하지 마시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if (num < 10)
    {
        printf("small");
    }

    return 0;
}
