
#include <stdio.h>

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);
    int result = 1;
    for (int i = 1; i <= k; i++)
    {
        result *= n;
    }

    printf("%d", result);
    return 0;
}