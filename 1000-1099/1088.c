// 1부터 입력한 정수까지 1씩 증가시켜 출력하는 프로그램을 작성하되,
// 3의 배수인 경우는 출력하지 않도록 만들어보자.

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {

        if (i % 3 == 0)
        {
            continue;
        }

        else
        {
            printf("%d ", i);
        }
    }
   
    return 0;

}