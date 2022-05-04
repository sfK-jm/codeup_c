// 주민번호 입력받아 형태 바꿔 출력

#include <stdio.h>

int main(void)
{
    int front_num, back_num; 
    scanf("%d-%d",&front_num, &back_num);
    printf("%06d%06d", front_num, back_num);

    return 0;
}