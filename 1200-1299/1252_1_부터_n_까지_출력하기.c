// 어떤 수 n을 입력으로 받아 1부터 n까지의 숫자를 출력하시오.

#include<stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    for (int i = 1; i<= num; i++)
    {
        printf("%d ", i);
    }

}