// 보람중학교에서는 얼마전 지필평가가 끝났다. 프로그래밍을 가르치는 선생님은 지필평가 전 학생들에게 이런 약속을 하였다.
// “이번 지필평가에서 1등은 선물을 주고, 꼴등은 벌청소를 시키겠다.”
// 학생들은 지필평가가 끝난 후 프로그래밍 과목의 1등과 꼴등의 점수가 궁금했다. 아직 성적 처리가 되지 않아 아무도 등수를 알지 못한다. 알고 있는 것은 각 학생들의 점수뿐이다.
// n명의 점수가 입력되면 1등과 꼴등의 점수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main()
{
    int student, high_score, low_score, score;
    high_score = 1;
    low_score = 999999;
    scanf("%d", &student);
    for (int i = 1; i <= student; i++)
    {
        scanf("%d", &score);
        if (score > high_score)
        {
            high_score = score;
        }
        else if (score < low_score)
        {
            low_score = score;
        }
    }
    printf("%d %d", high_score,low_score);
}