// * 표준몸무게

// 키에 따른 표준몸무게	        공식
// 키가 150 미만일 때	          (실제 키 - 100)
// 키가 150이상 160미만일 때	   (실제 키 - 150) /2 + 50
// 키가 160 이상일 때	          (실제 키 - 100) * 0.9

// * 비만도 계산 공식

// 비만도 = (실제 몸무게 - 표준몸무게)  * 100 / 표준 몸무게

// * 비만도에 따른 등급 판정

// 등급	    비만도 수치
//  10 이하	정상
// 10~20 이하	과체중
// 20 초과	    비만

#include <stdio.h>

int main(void)
{

    double stature, weight;
    scanf("%lf%lf", &stature, &weight);

    double Fatty_level, ref_weight;

    if (stature < 150)
    {
        ref_weight = stature - 100;
    }
    else if (stature < 160)
    {
        ref_weight = (stature - 150) / 2 + 50;
    }
    else
    {
        ref_weight = (stature - 100) * 0.9;
    }

    Fatty_level = (weight - ref_weight) * 100 / ref_weight;

    if (Fatty_level <= 10)
    {
        printf("정상");
    }
    else if (Fatty_level <= 20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }

    return 0;
}
