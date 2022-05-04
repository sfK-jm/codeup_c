// 출석 번호를 n번 무작위로 불렀을 때, 가장 빠른 번호를 출력해 보자.
// <입력>
//번호를 부른 횟수(n, 1 ~ 10000)가 첫 줄에 입력된다.
// n개의 랜덤 번호(k, 1 ~ 23)가 두 번째 줄에 공백을 사이에 두고 순서대로 입력된다.

#include <stdio.h>

int main()
{
    int arr[10000] = {};
    int num;

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d", arr[0]);

    return 0;
}
