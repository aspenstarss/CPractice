#include <stdio.h>
int main()
{
	int a,b,i=1;
	printf("Enter number of entries in table:");
	scanf("%d",&a);
 	while(i<=a){
	b=i*i;
	printf("%d\t%d\n",i,b);
	i++;}
    return 0;
}