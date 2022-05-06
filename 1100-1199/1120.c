// 세 정수가 입력되면 평균을 출력하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    float avr;
    scanf("%d %d %d", &num1, &num2, &num3);
    avr = (float)(num1 + num2 + num3) / 3.0;
    printf("%.2f", avr);

    return 0;
}
