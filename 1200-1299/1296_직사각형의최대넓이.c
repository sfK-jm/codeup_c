// 길이가 n인 철망을 이용하여 직사각형 모양의 가축 우리를 가능한 한 넓게 만들려고 한다.

// 이 때 최대 넓이를 정수로 출력하시오.

#include <stdio.h>

int main()
{
    double n;
    double num;
    scanf("%lf", &n);

    num = n / 4;
    num *= num;
    printf("%d", (int)num);

    return 0;
}
