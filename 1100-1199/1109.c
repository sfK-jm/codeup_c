// 이름, 나이, 부서코드, 보안키
// 위 정보가 모두 입력되면 이름, 나이, 부서코드, 보안키를 순서대로 줄을 바꿔 출력해라
// ex)
// mark
// 20
// A
// 3.154

#include <stdio.h>

int main()
{
    int name[21];
    int age;
    char code[21];
    double key;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%s", code);
    scanf("%lf", &key);
    printf("%s\n%d\n%s\n%lg", name, age, code, key);

    return 0;
}
