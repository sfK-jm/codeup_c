//  두 개의 참(1) 또는 거짓(0)이 입력될 때,
//  모두 참일 때에만 참을 출력하는 프로그램을 작성해보자.

#include<stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d" , x && y);

    return 0;
}