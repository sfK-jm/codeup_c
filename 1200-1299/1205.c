// 두 실수 a, b가 입력되면 그 두수를 더하거나 빼거나 곱하거나 나누거나 제곱을 해서 가장 큰 수를 출력하시오.
// ex) 1과 2가 입력되면,
// 1+2 = 3   , 2+1 = 3
// 1 - 2 = -1,   2 - 1 = 1
// 1 * 2 = 2,    2 * 1 = 2
// 1 / 2 = 0.5,   2 / 1 = 2
// 1^2=1 ,   2^1 = 2
// 따라서 최댓값은 3이다.

#include <stdio.h>
#include <math.h>

int main(void)
{

    int num1, num2;
    float temp;
    scanf("%d %d", &num1, &num2);

    temp = num1 + num2;

    if (num1 - num2 > temp)
    {
        temp = num1 - num2;
    }
    if (num2 - num1 > temp)
    {
        temp = num2 - num1;
    }

    if (num1 * num2 > temp)
    {
        temp = num1 * num2;
    }

    if ((float)(num1 / num2) > temp)
    {
        temp = (float)(num1 / num2);
    }
    if ((float)(num2 / num1) > temp)
    {
        temp = (float)(num2 / num1);
    }

    if (pow(num1, num2) > temp)
    {
        temp = pow(num1, num2);
    }
    if (pow(num2, num1) > temp)
    {
        temp = pow(num2, num1);
    }
    // pow(a,b) a의 b승

    printf("%.06f", temp);
    return 0;
}
