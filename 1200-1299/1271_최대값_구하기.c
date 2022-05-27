// 입력의 개수 n이 입력되고 n개의  데이터가 입력된다.
// 이 n개의 데이터 중 최대값을 출력한다.

#include <stdio.h>
int main()
{

    int a, b, result;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (i == 1)
        {
            result = b;
        }
        if (i > 1 && result <= b)
        {
            result = b;
        }
    }
    printf("%d", result);
    return 0;
}
