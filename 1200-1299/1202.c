// 점수가 입력되면 등급을 출력하시오.
// 등급)
//  90점 이상 : A
// 80점 이상 : B
// 70점 이상 : C
// 60점 이상 : D
// 60점 미만 : F

#include <stdio.h>

int main(void)
{

    int num;
    scanf("%d", &num);

    if (num >= 90)
    {
        printf("A");
    }
    else if (num >= 80)
    {
        printf("B");
    }
    else if (num >= 70)
    {
        printf("C");
    }
    else if (num >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}