#include <stdio.h>
int main()
{
	int i,n,odd,square;
	
	printf("Enter number of entries in table:");
	scanf("%d",&n);
 	i=1;
 	odd=3;
 	printf("\tnum\tsquare\n");
 	for(square=1;i<=n;odd += 2){
	 	printf("%10d%10d\n",i,square);
	 	++i;
	 	square += odd;
	 }
    return 0;
}