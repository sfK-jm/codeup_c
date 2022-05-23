// 소수 둘째 자리의 두 실수 a와 b가 입력으로 주어진다.
// a와 b사이의 수를 0.01간격으로 오름차순으로 출력하시오.
// ex)
// 5.67 5.73  ==> 5.67 5.68 5.69 5.70 5.71 5.72 5.73

#include <stdio.h>

int main()
{

    double a, b;
    scanf("%lf %lf", &a, &b);

    for (double i = a; i <= b; i += 0.01)
    {
        printf("%.2lf ", i);
    }

    return 0;
}