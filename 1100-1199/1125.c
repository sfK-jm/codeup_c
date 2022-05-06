// 10진수 정수를 입력받아 8진수와 16진수로 출력한다.

#include <stdio.h>

int main(void)
{
    int num;

    scanf("%d", &num);

    printf("%o %X", num, num);

    return 0;
}
