// gbs라는 개미 투자자가 주식에 투자하려고 합니다.
// 이 사람이 투자한 돈의 액수와, 그 주식의 하루간의 변동을 퍼센트로 알 때, 이 사람의 순수익과 이득/손해 판단을 출력하세요.

#include <stdio.h>

int main()
{

    float a;
    int b;

    scanf("%f", &a);
    int a2;
    a2 = a;

    scanf("%d", &b);
    float rate;
    for (int i = 1; i <= b; i++)
    {
        scanf("%f", &rate);
        a = a + (a * rate * 0.01);
    }
    int sum;
    if ((a - a2) > 0)
    {
        sum = a - a2 + 0.5;
    }
    else
    {
        sum = a - a2 - 0.5;
    }

    printf("%d\n", sum);

    if (sum > 0)
    {
        printf("good");
    }
    else if (sum == 0)
    {
        printf("same");
    }
    else
    {
        printf("bad");
    }

    return 0;
}
