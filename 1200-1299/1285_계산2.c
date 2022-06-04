// 계산기 1에서 두 피연산자에 대한 연산만 다루었다.
// 이번에는 식을 입력하면 차례대로 계산하여 출력하는 계산기를 만들어보자.
// 단, 우선순위는 따지지 않고 왼쪽에서 부터 차례대로 계산하고, 모든 계산은 정수형 계산으로 처리한다.

#include <stdio.h>

int main()
{

    char ch;
    int num;
    int sum = 0;
    scanf("%d", &num);
    sum = num;
    for (int i = 0;; i++)
    {
        scanf("%c", &ch);
        // scanf("%d",&num);

        if (ch == '+')
        {
            scanf("%d", &num);
            sum += num;
        }
        else if (ch == '-')
        {
            scanf("%d", &num);
            sum -= num;
        }
        else if (ch == '/')
        {
            scanf("%d", &num);
            sum /= num;
        }
        else if (ch == '*')
        {
            scanf("%d", &num);
            sum *= num;
        }
        else if (ch == '=')
        {
            printf("%d", sum);
            break;
        }
    }
    return 0;
}