// 바둑판(19 * 19)에 n개의 흰 돌을 놓는다고 할 때,
// n개의 흰 돌이 놓인 위치를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main()
{

    int Go[20][20] = {};
    int n, x, y;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        Go[x][y] = 1;
    }
    for (int i = 1; i <= 19; i++) //한 줄(위에서 아래로) 씩
    {
        for (int j = 1; j <= 19; j++) //한 열(왼쪽에서 오른쪽으로) 씩
        {
            printf("%d ", Go[i][j]); //값 출력
        }
        printf("\n"); //줄 바꾸기
    }

    return 0;
}
