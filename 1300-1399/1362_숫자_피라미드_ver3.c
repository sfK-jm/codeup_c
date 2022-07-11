// 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
// 예) n이 5이면
// 15
// 14 13
// 12 11 10
// 9 8 7 6
// 5 4 3 2 1 

# include <stdio.h>

int main()
{
   int i,j,n,num=0;
   
   scanf("%d",&n);
	
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=i; j++)
		{
			num++;
		}
	}
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=i; j++)
		{
			printf("%d ",num--);
		}
		printf("\n");
	}
   return 0;
}
