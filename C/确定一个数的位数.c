#include <stdio.h>
int main()
{
	int i=0,a;
	printf("Enter a number:");
	scanf("%d",&a);
 	while(a>0){
	a=a/10;
	i++;}
	printf("%d\n",i);
    return 0;
}