// 2개의 문자를 입력받아서 순서를 바꿔 출력해보자.
#include <stdio.h>

int main()
{
    char a, b;
    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);
    return 0;
}