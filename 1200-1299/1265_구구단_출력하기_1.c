// 구구단의 원하는 단을 입력하면 그 단의 구구단이 출력되게 하시오.
// 예)
// 3
// 3*1=3
// 3*2=6
// 3*3=9
// ...
// 3*9=27

#include <stdio.h>

int main()
{

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= 9; i++)
    {
        printf("%d*%d=%d\n", num, i, num * i);
    }

    return 0;
}
