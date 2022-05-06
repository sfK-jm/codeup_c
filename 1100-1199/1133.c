// 공백이 있는 문자열을 입력받아 출력해보자.

#include <stdio.h>

int main(void)
{
    char data[31] = "";
    fgets(data, 31, stdin);
    printf("%s", data);

    return 0;
}