// 년월일(yyyy.mm.dd)를 입력받아,
//일월년(dd-mm-yyyy)로 출력해보자.

#include <stdio.h>

int main()
{
    int y, m, d;

    scanf("%04d.%02d.%02d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);

    return 0;
}