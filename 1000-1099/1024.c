// 단어를 1개 입력받는다.
// 입력받은 단어(영어) 각 문자를
// 한줄에 한 문자씩 분리해 출력한다

#include <stdio.h>
#include <string.h>

int main()
{
    char x[100];
    scanf("%s", x);
    for (int i = 0; i < strlen(x); i++)
    {
        printf("\'%c\'\n", x[i]);
    }
}
