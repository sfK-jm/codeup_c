// 태어난 해, 월, 일을 입력받아 사주팔자를 보는 프로그램을 작성하시오.
// 사주를 보는 방법)
// 세 수(년,월,일)가 주어지면,  (년 - 월 + 일)에 마지막 숫자가 0이면 "대박"을 출력, 그렇지 않으면 "그럭저럭"을 출력하세요.

#include <stdio.h>

int main(void)
{
    //년,월,일, 합 정수 선언
    int year, mon, day, sum;
    scanf("%d %d %d ", &year, &mon, &day);
    sum = year - mon + day; //사주는 년 - 월+일

    if (!(sum %= 10))
    {
        printf("대박");
    } // 10으로 나눈값이 0이라면 1로(참) 변환, 반대면 0으로 거짓이됨
    else
    {
        printf("그럭저럭");
    } // 아니면( 0 이 아니면)

    return 0;
}