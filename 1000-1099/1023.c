// 실수 1개를 입력받아 정수 부분과 실수 부분으로 나누어 출력한다

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d.%d", &x, &y);
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}