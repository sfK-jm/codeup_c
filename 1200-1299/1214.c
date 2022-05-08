// // 연도와 월을 알고 있을 때 그 달의 마지막 날을 구하는 프로그램을 작성하시오.
// // 2월 윤달)
// 2월이 29일인 해를 윤년이라고 하는데, 윤년의 판단은 아래 두 조건 중 하나만 만족하면 된다.
// - 조건 1 : 400의 배수인 해는 모두 윤년이다.
// - 조건 2 : 4의 배수인 해들 중 100의 배수가 아닌 해들은 모두 윤년이다.

#include <stdio.h>

int main(void)
{

    int year, mon;
    scanf("%d %d", &year, &mon);

    if (mon == 2)
    {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
    }
    else
    {
        if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
        {
            printf("31");
        }
        else
        {
            printf("30");
        }
    }
    return 0;
}
