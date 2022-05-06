// 화학식을 입력하면 분자량을 구해주는 프로그램을 만들어 주자!
// 화학식은 CxHy의 꼴로 입력된다.
// C의 원자량은 12, H의 원자량은 1로 한다.

#include <stdio.h>
int main()
{
    int x, y;
    scanf("C%dH%d", &x, &y);
    printf("%d", 12 * x + y);
    return 0;
}
