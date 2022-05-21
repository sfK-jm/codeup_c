// 삼각형 판단하기
// 삼각형의 3변의 길이 a, b, c가 입력으로 주어진다.
// 여기서 입력되는 변의 관계는 a ≤ b ≤ c 이다.
// 그 삼각형이 무슨 삼각형인지 출력하시오.

#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c && c == a)
        printf("정삼각형");
    else if (a + b <= c)
        printf("삼각형아님");
    else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
        printf("이등변삼각형");

    else if ((a * a) + (b * b) == (c * c))
        printf("직각삼각형");

    else
        printf("삼각형");

} 