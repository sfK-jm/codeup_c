// 수의 개수  n이 주어지고, 그 다음 줄에 무작위로 n개의 정수가 입력된다.
// n개의 수의 합을 출력하시오.

#include <stdio.h>

int main()
{

    int num, num2, sum;
    scanf("%d", &num);
    sum = 0;
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &num2);
        sum += num2;
    }
    printf("%d", sum);
    return 0;
}