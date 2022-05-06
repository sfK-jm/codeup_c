// 섭씨 온도가 입력되면 화씨 온도로 변환하시오.
// 화씨 온도 = 9 / 5 * 섭씨온도 + 32

#include <stdio.h>

int main(void)
{
    int Celsius;
    float Fahrenheit;

    scanf("%d", &Celsius);

    Fahrenheit = 9.0 / 5.0 * (float)Celsius + 32;
    printf("%.3f", Fahrenheit);

    return 0;
}