// 윷놀이는 4개의 윷을 이용하는 게임이다.
// 도 : 1개가 뒤집어진 상태
// 개 : 2개가 뒤집어진 상태
// 걸 : 3개가 뒤집어진 상태
// 윷 : 4개가 뒤집어진 상태
// 모 : 하나도 뒤집어지지 않은 상태
// 4개의 윷 상태가 입력되면 도, 개, 걸, 윷, 모를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{

    int num1, num2, num3, num4, state;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    state = num1 + num2 + num3 + num4;

    if (state == 1)
    {
        printf("도");
    }
    else if (state == 2)
    {
        printf("개");
    }
    else if (state == 3)
    {
        printf("걸");
    }
    else if (state == 4)
    {
        printf("윷");
    }
    else
    {
        printf("모");
    }
    return 0;
}
