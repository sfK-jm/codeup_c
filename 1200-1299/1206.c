// 두 자연수 a, b가 주어진다.
// b가 a의 배수이면 "a*x=b"를 출력하고,
// a가 b의 배수이면 "b*x=a"를 출력하고,
// 배수관계가 아니면 "none"을 출력하시오.
// ex)
// 5 10    ====> 5*2=10
// 14 2   ======> 2*7=14
// 3 7 =====> none

#include <stdio.h>

int main(void)
{

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if ((num2 % num1) == 0)
    {
        printf("%d*%d=%d", num1, (num2 / num1), num2);
    }
    else if ((num1 % num2) == 0)
    {
        printf("%d*%d=%d", num2, (num1 / num2), num1);
    }
    else
    {
        printf("none");
    }
    return 0;
}
