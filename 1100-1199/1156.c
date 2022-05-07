// 어떤 자연수가 입력되면  홀수이면 "odd"을 출력하고, 짝수이면 "even"을 출력하시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if ((num % 2) == 0)
        printf("even");
    else
        printf("odd");

    return 0;
}
