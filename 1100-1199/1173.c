// 수호는 30분 전으로 돌아가고 싶은 1人 이다.
// 공백을 기준으로 시간과 분이 주어진다.
// 그러면 이 시간을 기준으로 30분전의 시간을 출력하시오.
// 예)
// 12 35  =====> 12 5
// 12 0 ======> 11 30
// 11 5 ======> 10 35

#include <stdio.h>

int main(void)
{

    int hour, min;
    scanf("%d %d", &hour, &min);
    if (min - 30 >= 0)
    { // ex 31분
        printf("%d %d", hour, min - 30);
    }
    else
    { //시가 바뀌는 경우
        hour--;
        if (hour < 0)
        {
            hour = 23;
        }

        printf("%d %d", hour, 30 + min);
    }

    return 0;
}