// 영문자(a ~ z) 1개가 입력되었을 때 그 문자까지의 알파벳을 순서대로 출력해보자

#include <stdio.h>

int main(void)
{

    char c;
    char start = 'a';
    scanf("%c", &c);

    do
    {
        printf("%c ", start);
        start++;
    } while (c >= start );

    return 0;
}