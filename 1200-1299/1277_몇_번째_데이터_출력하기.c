// 첫 줄에 데이터의 개수 N(N은 홀수)이 입력되고, 그 다음 줄에 N개의 데이터가 입력된다.
// 여기서 첫번째 데이터, 중간 데이터, 마지막 데이터를 출력하시오.
// 예)
// 5
// 2 4 6 1 7 이면
// 2 6 7
// 이 출력된다.
// (첫번째 데이터 2,
// 중간 데이터 6,
// 마지막 데이터 7)

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int input_num, first, mid, last;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &input_num);
        if (i == 1)
        {
            first = input_num;
        }
        if (i == (n + 1) / 2)
        {
            mid = input_num;
        }
        if (i == n)
        {
            last = input_num;
        }
    }

    printf("%d %d %d", first, mid, last);
    return 0;
}
