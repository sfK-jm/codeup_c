// * 비만도 계산 공식(브로카의 공식)

// 항목	         공식
// 표준몸무게 = 	  (실제 키 - 100) * 0.9
// 비만도 = 	     (실제 몸무게 - 표준몸무게)  * 100 / 표준 몸무게

 

// * 비만도에 따른 등급 판정

// 등급	        비만도 수치
// 10이하	        정상
// 10초과 20이하	과체중
// 20 초과	        비만

#include<stdio.h>

int main()
{
    double stature, weight;
    scanf("%lf%lf", &stature, &weight);

    double Fatty_level;

    Fatty_level = (weight - ((stature-100)*0.9))*100/((stature-100)*0.9);

    if (Fatty_level<=10)
    {
        printf("정상");
    }
    else if (Fatty_level<=20)
    {
        printf("과체중");
    }
    else
    {
        printf("비만");
    }

    
}