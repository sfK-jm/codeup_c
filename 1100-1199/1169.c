// 나이가 주어지면 몇 년도에 태어났는지를 출력하시오. (나이는 2012년도 기준입니다.)
// 단, 출력할 때 년도 4자리 중 뒤의 두자리만 출력하고, 한 칸 띄운 후 1900년도 출생이면 1을 출력, 2000년대 출생이면 3을 출력하시오.
// 예) 18살이면 1995년생이므로 95 1을 출력한다.

#include <stdio.h>

int main(void)
{

    int front, rear, age;
    scanf("%d", &age);

    if (age > 13)
    {

        front = 112 - age + 1;
        rear = 1;
        printf("%d %d", front, rear);
    }
    else
    {
        front = 12 - age + 1;
        rear = 3;
        printf("%d %d", front, rear);
    }
    return 0;
}
