// 기부할 사람들을 번호 순으로 일정한 규칙에 따라 돈을 준다고 한다.

// 규칙은 다음과 같다

// 1, 10, 2, 20, 3, 30, 4, 40, 5, 50, 6, 60, 7, 70, 8, 80, 9, 90, 10, 100, 11, 110, 12, 120, ...

// 한편, 가난한 존과 밥은 돈을 받기 위해 신청을 했다.

// 존의 번호(k), 밥의 번호(h)가 주어질때 존과 밥이 받는 기부금의 합을 구하시오.

#include <stdio.h>

int main()
{

    int k, h, temp; 
    scanf("%d %d", &k, &h);

    if (k >= h)
    {
        temp = k;
    }
    else
    {
        temp = h;
    }

    int money, k_money, h_money;

    for (int i = 1; i <= temp; i++)
    {

        if (i % 2 == 1)
        {
            money = (i + 1) / 2;
        }
        else
        {
            money = (i / 2) * 10;
        }

        if (i == k)
        {
            k_money = money;
        }
        if (i == h)
        {
            h_money = money;
        }
    }

    printf("%d", k_money + h_money);

    return 0;
}
