// 수의 개수 n이 주어지고, 그 다음 줄에 무작위로 n개의 자연수가 입력된다.
// 그 n개의 수 중에서 짝수의 개수를 출력하시오.

#include <stdio.h>

int main()
{

    int num, num2, sum;
    scanf("%d", &num);
    sum = 0;
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &num2);
        if (num2 % 2 == 0)
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}