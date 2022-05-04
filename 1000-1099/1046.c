//정수 3개를 입력받아 합과 평균을 출력해라

#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d\n", x + y + z);
    printf("%.1f", (x + y + z) / 3.0);

    return 0;
}