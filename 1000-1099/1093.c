// 출석 번호를 n번 무작위로 불렀을 때, 각 번호(1 ~ 23)가 불린 횟수를 각각 출력해보자.
// <입력>
// 첫 번째 줄에 출석 번호를 부른 횟수인 정수 n이 입력된다. (1 ~ 10000)
// 두 번째 줄에는 무작위로 부른 n개의 번호(1 ~ 23)가 공백을 두고 순서대로 입력된다. 

#include <stdio.h>

int main()
{
    int x[24]={}; 
    int num;
    int num2;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &num2);
        x[num2] += 1;
    }

    for (int j = 1; j < 24; j++)
    {
        printf("%d ", x[j]);
    }

    return 0;
}