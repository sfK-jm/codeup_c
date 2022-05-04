// 세 정수 a, b, c가 입력되었을 때, 짝(even)/홀(odd)을 출력해보자.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 % 2) == 0)
        printf("even\n"); //짝
    else
        printf("odd\n"); //홀

    if ((num2 % 2) == 0)
        printf("even\n"); //짝
    else
        printf("odd\n"); //홀

    if ((num3 % 2) == 0)
        printf("even"); //짝
    else
        printf("odd"); //홀

    return 0;
}
