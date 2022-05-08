// 보림이가 선택할 수 있는 메뉴는 다음과 같다.
// 1. 치즈버거 : 400 칼로리
// 2. 야채버거 : 340 칼로리
// 3. 우유 : 170 칼로리
// 4. 계란말이 : 100 칼로리
// 5. 샐러드 : 70 칼로리
// 이 메뉴들 중 2가지 메뉴를 선택했을 때 칼로리 합을 계산하고, 그 칼로리 합이 500보다 크면 "angry", 500이하면 "no angry"를 출력하시오.

#include <stdio.h>

int main(void)
{

    int num1, num2, cal1, cal2;
    scanf("%d %d", &num1, &num2);

    if (num1 == 1)
    {
        cal1 = 400;
    }
    else if (num1 == 2)
    {
        cal1 = 340;
    }
    else if (num1 == 3)
    {
        cal1 = 170;
    }
    else if (num1 == 4)
    {
        cal1 = 100;
    }
    else
    {
        cal1 = 70;
    }

    if (num2 == 1)
    {
        cal2 = 400;
    }
    else if (num2 == 2)
    {
        cal2 = 340;
    }
    else if (num2 == 3)
    {
        cal2 = 170;
    }
    else if (num2 == 4)
    {
        cal2 = 100;
    }
    else
    {
        cal2 = 70;
    }

    if (cal1 + cal2 > 500)
    {
        printf("angry");
    }
    else
    {
        printf("no angry");
    }

    return 0;
}
