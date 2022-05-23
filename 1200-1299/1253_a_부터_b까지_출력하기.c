// 어떤 두 수 a, b가 있을 때 두 수 사이의 모든 정수를 오름차순으로 출력하시오.
// 예를 들어, a=5 , b=10일 경우 5 6 7 8 9 10입니다.

#include <stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d%d", &a, &b);
     if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
    {
        printf("%d ", i);
    }
}