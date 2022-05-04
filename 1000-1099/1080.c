// 1, 2, 3 ... 을 계속 더해 나갈 때,
// 그 합이 입력한 정수(0 ~ 1000)보다 같거나 작을 때까지
// 계속 더하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{

    int num, sum;
    scanf("%d", &num);
    int i = 0;
    sum = 0;
    while (1)
    {
        i++;
        sum += i;
        if (sum >= num)
        {
            break;
        }
    }
    printf("%d", i);
    return 0;
}