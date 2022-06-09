// 학교에서 축구대회를 열기로 했다. 본교 학생 수가 많아서 되도록 큰 운동장을 필요로 한다.
// 학교 근처에 축구를 할 수 있는 운동장이 3개가 있는데 각 운동장의 가로와 세로의 길이를 홈페이지를 통해서 알 수 있었다.
// 우리는 3개의 운동장 중 가장 큰 운동장을 빌리기로 했다.
// 이 3개의 운동장 중 가장 넓은 운동장의 넓이를 구하는 프로그램을 작성하시오.

#include<stdio.h>

int Area(int, int);

int Area(int a, int b)
{
    return a*b;
}

int main()
{
    int a1,a2,b1,b2,c1,c2,a,b,c;
    scanf("%d%d", &a1,&a2);
    a = Area(a1, a2);
    scanf("%d%d", &b1,&b2);
    b = Area(b1, b2);
    scanf("%d%d", &c1,&c2);
    c = Area(c1, c2);

    if (a>b && a >c)
    {
        printf("%d",a);
    }
    else if (b>a && b >c)
    {
        printf("%d",b);
    }
    else if (c>a && c >b)
    {
        printf("%d",c);
    }
    return 0;

}