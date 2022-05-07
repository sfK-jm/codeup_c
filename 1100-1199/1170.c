// 학번을 입력 받아 다음 형식으로 출력하시오.
// 학번은 학년, 반, 번호로 입력된다.
// 예)
// 2 3 27   =====>    2327로 출력
// 2 3 7   ======> 2307로 출력   (번호가 10번미만이면 0을 붙여 출력)

#include <stdio.h>

int main(void)
{

    int grade, class, num;
    scanf("%d%d%d", &grade, &class, &num);
    printf("%d%d%02d", grade, class, num);

    return 0;
}
