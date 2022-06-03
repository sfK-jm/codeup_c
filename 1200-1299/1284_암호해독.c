// 두 소수의 곱을 암호로 사용하는 알고리즘은 큰 수의 소인수분해가 어렵기 때문에 안전하다고 알려져있다.
// 그렇지만, 만약 두 소수를 잊어버리면 어떻게 될까? 굉장히 난감할 것이다.
// 이에 대비해 어떤 수(n)가 입력되면 두 소수의 곱으로 나타낼 수 있으면 두 소수를 오름차순으로 출력하고,
// 그렇지 않으면 "wrong number"를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include "math.h"

int Fn(int n)
{
    int i;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (i = 3; i <= sqrt((float)n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{

    int number;
    scanf("%d", &number);

    int a, b;
    a = 0;
    b = 0;
    for (int i = 0; i <= number; i++)
    {
        if (i == 0)
        {
            continue;
        }
        else
        {
            if (number % i == 0)
            {
                if (Fn(i))
                {
                    if (Fn(number / i))
                    {
                        a = i;
                        b = number / i;
                        break;
                    }
                }
            }
        }
    }
    if (a != 0 && b != 0)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("wrong number");
    }
    return 0;
}