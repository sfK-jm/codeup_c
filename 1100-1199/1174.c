// 수호는 30분 전으로 돌아가고 싶은 1人 이다.
// 공백을 기준으로 시간과 분이 주어진다.
// 그러면 이 시간을 기준으로 30분전의 시간을 출력하시오.
// 예)
// 12 35  =====> 12 5
// 12 0 ======> 11 30
// 11 5 ======> 10 35
// but) i_f  s_w_i_t_c_h 사용금지

#include <stdio.h>
int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    hour += 24;                  // 시간 + 24시간
    minute = minute + hour * 60; // 시간을 전부 분으로 변환
    minute -= 30;                // 분 - 30분 전으로
    hour = minute / 60;          // 분 / 60은 시간
    hour = hour % 24;            // 시간이 24시간을 넘을 수 있으니 %24
    minute = minute % 60;        // 분이 60을 넘을 수 있으니 %60
    printf("%d %d", hour, minute);
    return 0;
}
