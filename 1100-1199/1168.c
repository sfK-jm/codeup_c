// 주민등록번호는 생년월일과 성별정보, 지역정보로 이루어진다.
// 여기서 생년월일과 성별정보만 입력으로 받겠다.
// 성별 정보는 1이면 1900년대 출생 남자, 2이면 1900년대 출생 여자, 3이면 2000년대 출생 남자, 4이면 2000년대 출생 여자를 말한다.
// 기준년도는 2012년도이다. 현재 나이를 출력하시오.

#include <stdio.h>

int main(void)
{

    int front, rear, age;
    scanf("%d %d", &front, &rear);

    if ((rear == 1) || (rear == 2))
    {

        age = 112 - (int)(front * 0.0001) + 1;
        printf("%d", age);
    }
    else
    {
        age = 12 - (int)(front * 0.0001) + 1;
        printf("%d", age);
    }
    return 0;
}