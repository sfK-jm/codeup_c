// 영문자 1개를 입력받아 그 다음 문자를 출력하시오

#include <stdio.h>

int main(void)
{
    char x;
    scanf("%c", &x);
    printf("%c", x + 1);
    
    return 0;
}