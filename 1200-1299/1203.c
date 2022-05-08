// BMI 수치가 입력되면 비만을 판단하시오.

// * BMI에 따른 비만 판정
// BMI 수치	비만 판정
// ~10 이하	정상
// ~20 이하	과체중
// 20 초과	비만

#include <stdio.h>

int main(void)
{

    int num;
    scanf("%d", &num);

    if (num <= 10)
    {
        printf("정상");
    }
    else if (num <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }

    return 0;
}
