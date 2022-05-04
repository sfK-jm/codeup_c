// 년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자.

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%04d.%02d.%02d", a, b, c);
    return 0;
}
