// 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
// 예) n이 5이면
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1 


# include <stdio.h>

int main()
{
   int i,j,n;
   
   scanf("%d",&n);
   int num = n;
	
	for(i = n; i>=1; i--)
	{
		for(j = i; j>=1; j--)
		{
			printf("%d ",num);
		}
		printf("\n");
		num--;
	}
   
   return 0;
}            