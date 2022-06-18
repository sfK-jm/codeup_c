// 코드업 고등학교에 3학년으로 재학 중인 김 디오판토스(19)는 방정식, 그 중에서도 부정방정식에 관심이 많은 학생이다.

// 부정방정식이란 x+2y=3과 같이 식의 개수보다 미지수의 개수가 많은 방정식을 말한다.

// 최근 디오판토스는 부정방정식의 해 중 미지수가 모두 정수인 해를 찾는 것에 몰두하고 있다.

// 하지만 방정식의 정수해를 일일이 손으로 구하는 건 여러모로 힘든 일이었기에, 디오판토스는 절친인 당신에게 도움을 요청했다.

// 당신의 목표는 방정식 Ax+By=C의 정수해 (x,y)를 찾아 주는 프로그램을 만들어서 디오판토스를 도와 주는 것이다.

// 이를 해결해 보자!

#include <stdio.h>

int A, B, C, i, x, y, a[10000] = {}, b[10000] = {}, r[10000] = {}, q[10000] = {};

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    scanf("%d %d %d", &A, &B, &C);

    int s[] = {A > 0 ? 1 : -1, B > 0 ? 1 : -1, A > B};

    // 0이 포함된 경우
    if (A == 0 && B != 0)
    {
        if (C / B * B == C)
        {
            x = 1;
            y = C / B;
            goto answer;
        }
        else
            goto no_answer;
    }
    else if (B == 0 && A != 0)
    {
        if (C / A * A == C)
        {
            x = C / A;
            y = 1;
            goto answer;
        }
        else
            goto no_answer;
    }
    else if (A == 0 && B == 0)
    {
        if (C)
            goto no_answer;
        else
        {
            x = 1;
            y = 1;
        }
        goto answer;
    } // 1들은 다 임의의 수 - 정답으로 인정

    //부호

    A *= s[0];
    B *= s[1];

    int GCD = gcd(A, B); //최대공약수

    //점화식 가동
    if (s[2])
    {
        r[0] = A;
        r[1] = B;
    } // A>B
    else
    {
        r[0] = B;
        r[1] = A;
    }

    for (i = 1; r[i] != 0; i++)
    {
        q[i] = r[i - 1] / r[i];
        r[i + 1] = r[i - 1] % r[i];
    }

    int n = i - 1;

    if (C % GCD)
        goto no_answer; //디오판토스 방정식 해가 없는 경우

    a[n] = -q[n - 1];
    b[n] = 1;
    for (i = n - 1; i >= 1; i--)
    {
        a[i] = b[i + 1] - q[i - 1] * a[i + 1];
        b[i] = a[i + 1];
    }

    int t = C / GCD;

    //출력부
    if (s[2])
    {
        x = t * a[1] * s[0];
        y = t * b[1] * s[1];
    }
    else
    {
        x = t * b[1] * s[0];
        y = t * a[1] * s[1];
    }

answer:
    printf("%d %d", x, y);
    return 0;

no_answer:
    printf("Not Exist");
}