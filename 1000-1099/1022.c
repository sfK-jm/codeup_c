// 공백 문자가 포함되어 있는 문장을 입력받고 그대로 출력하는 연습

#include <stdio.h>

int main()
{
    char x[2000];
    fgets(x, 2000, stdin);
    printf("%s", x);

    return 0;
}