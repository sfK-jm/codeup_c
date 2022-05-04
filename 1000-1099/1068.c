//점수(정수, 0 ~ 100)를 입력받아 평가를 출력해보자.
// 평가 기준
// 점수 범위 : 평가
//  90 ~ 100 : A
//  70 ~   89 : B
//  40 ~   69 : C
//  0 ~   39 : D
// 로 평가되어야 한다.

#include <stdio.h>

int main(void)
{
    int score;
    scanf("%d", &score);

    if (score >= 90)
        printf("A");
    else if (score >= 70)
        printf("B");
    else if (score >= 40)
        printf("C");
    else
        printf("D");

    return 0;
}
