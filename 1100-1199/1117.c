// 두 실수를 입력받아 두 실수의 곱을 출력하되 소수 둘째자리까지 출력하시오.

#include <stdio.h>

int main()
{
    float x, y, z;
    scanf("%f%f", &x, &y);
    z = x * y;
    printf("%0.2f", z);
}