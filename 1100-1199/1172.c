// 세 수를 오름차순으로 정렬하려고 한다. (낮은 숫자 -> 높은 숫자)
// 예)
// 5 8 2   ====> 2 5 8    로 출력

#include <stdio.h>

int main(void)
{

    int num1, num2, num3, temp;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 >= num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 >= num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    printf("%d %d %d", num1, num2, num3);

    return 0;
}
