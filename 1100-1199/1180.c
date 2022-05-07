// 휴지통이 n만큼 차면 알아서 쓰레기를 압축해주는 휴지통을 만들려고 한다.
// 이 때 압축하는 알고리즘은 다음과 같다.
// 10의 자릿수와 1의 자릿수를 서로 바꾸고, 거기에 2를 곱한다.
// 예) 70일 경우 14가 된다.( 70 -> 07 -> 14 )
// 이 알고리즘은 때로는 부작용을 일으켜 휴지통의 내용이 더 많아 질지도 모른다.
// 만약 이 알고리즘의 심각한 부작용으로 수치가 100이 넘는다면 100의 자릿수는 무시된다.

#include <stdio.h>

int main(void)
{

    int num, a, b;
    scanf("%d", &num);

    a = num / 10; 
    b = num % 10; 

    num = (b * 10 + a) * 2;
    if (num >= 100)
    {
        num = num - 100;
    }
    printf("%d\n", num);
    if (num <= 50)
    {
        printf("GOOD");
    }
    else
    {
        printf("OH MY GOD");
    }

    return 0;
}
