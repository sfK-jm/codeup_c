// 로또 순위 매기는 방법)

// 1등	당첨번호 6개 일치
// 2등	당첨번호 5개 일치 + 보너스번호 일치
// 3등	5개 번호 일치
// 4등	4개 번호 일치
// 5등	3개 번호 일치
// 꽝	2개 이하 일치

// 첫 줄에 로또 당첨번호 6개와 보너스 번호 1개가 주어진다.
// 둘째 줄에는 가지고 있는 로또 번호 6개가 주어진다.

#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, num6, num7;
    scanf("%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7);
    int lotto1, lotto2, lotto3, lotto4, lotto5, lotto6;
    scanf("%d%d%d%d%d%d", &lotto1, &lotto2, &lotto3, &lotto4, &lotto5, &lotto6);
    int score = 0;
    if (num1 == lotto1 || num2 == lotto1 || num3 == lotto1 || num4 == lotto1 || num5 == lotto1 || num6 == lotto1)
    {
        score++;
    }
    if (num1 == lotto2 || num2 == lotto2 || num3 == lotto2 || num4 == lotto2 || num5 == lotto2 || num6 == lotto2)
    {
        score++;
    }
    if (num1 == lotto3 || num2 == lotto3 || num3 == lotto3 || num4 == lotto3 || num5 == lotto3 || num6 == lotto3)
    {
        score++;
    }
    if (num1 == lotto4 || num2 == lotto4 || num3 == lotto4 || num4 == lotto4 || num5 == lotto4 || num6 == lotto4)
    {
        score++;
    }
    if (num1 == lotto5 || num2 == lotto5 || num3 == lotto5 || num4 == lotto5 || num5 == lotto5 || num6 == lotto5)
    {
        score++;
    }
    if (num1 == lotto6 || num2 == lotto6 || num3 == lotto6 || num4 == lotto6 || num5 == lotto6 || num6 == lotto6)
    {
        score++;
    }

    if (score == 6)
    {
        printf("1");
    }
    else if ((num7 == lotto1 || num7 == lotto2 || num7 == lotto3 || num7 == lotto4 || num7 == lotto5 || num7 == lotto6) && score == 5)
    {
        printf("2");
    }
    else if (score == 5)
    {
        printf("3");
    }
    else if (score == 4)
    {
        printf("4");
    }
    else if (score == 3)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
    return 0;
}