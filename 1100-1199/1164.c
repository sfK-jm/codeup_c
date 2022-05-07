// 어떤 차의 높이가 170cm 이다.
// 이 차는 3개의 터널을 차례대로 지나게 될 것이다.
// 터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌하여 사고가 날 것이다.
// 터널의 높이가 차례대로 3개 주어지면 터널을 무사히 잘 통과하면 PASS 를 출력하고, 사고가 난다면 CRASH 를 출력하시오.

#include <stdio.h>

int main(void)
{

    int t1, t2, t3; //터널 1,2,3
    int car = 170;
    scanf("%d %d %d", &t1, &t2, &t3);

    if ((t1 > car) && (t2 > car) && (t3 > car)) //터널1,2,3이 모두 차보다 크면
    {
        printf("PASS");
    }
    else
    {
        printf("CRASH");
    }

    return 0;
}
