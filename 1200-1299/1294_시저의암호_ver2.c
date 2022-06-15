// ※ 씨저의 암호 원리는 앞의 문제를 참고하세요.

// 대현이는 씨저의 암호 방식을 이용하여 문장을 만들려고 한다.

// never trust brutus 를 씨저의 암호로 바꾸면 qhyhu wuxvw euxwxv 이다.

// 그런데 집중력이 약한 대현이는 하나 하나 찾아서 암호로 바꾸는데 어려움을 겪고 있다.

// 우리가 대현이를 위해 평문을 씨저의 암호문으로 바꾸는 프로그램을 만들어주자.

#include <stdio.h>

int main()
{
    char txt;

    while (scanf("%c", &txt) != EOF)
    {
        if (txt >= 97 && txt <= 122)
        {
            if (txt + 3 < 123)
            {
                printf("%c", txt + 3);
            }

            else if (txt + 3 >= 123)
            {
                printf("%c", txt - 23);
            }
        }
        if (txt == ' ')
        {
            printf(" ");
        }
    }

    return 0;
}