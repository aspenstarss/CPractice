#include <stdio.h>

int main(void)
{
    int sum = 1, fact = 1;
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
        fact *= i;
        sum += fact;
        printf("--%d  %d\n", fact, sum);
    }
    printf("%d\n", sum);
    return 0;
}