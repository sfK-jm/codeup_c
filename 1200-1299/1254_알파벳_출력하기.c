// 시작 알파벳과 마지막 알파벳을 입력받아 그 두 알파벳 사이의 모든 알파벳을 출력하시오.
// ex)
// a f   ====> a b c d e f

#include <stdio.h>

int main()
{

    char x, y;
    scanf("%c %c", &x, &y);

    for (int i = x; i <= y; i++)
    {
        printf("%c ", i);
    }

    return 0;
}
