// 5개의 정수들의 최댓값과 최솟값을 구하는 프로그램을 작성하라.

#include <stdio.h>

int main()
{
    int num, min, max, temp;
    min = 0;
    max = 0;
    temp = 0;
    scanf("%d\n", &num);
    min = num;
    max = num;
    for (int i = 1; i <= 4; i++)
    {
        scanf("%d\n", &num);
        if (min >= num)
        {
            min = num;
        }
        if (max <= num)
        {
            max = num;
        }
    }
    printf("%d\n%d", max, min);
    return 0;
}