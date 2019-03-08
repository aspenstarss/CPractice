#include <stdio.h>
int main()
{
	float import=1,max;
	printf("Enter a number:");
	scanf("%f",&max);
	for(;import	> 0;){
	printf("Enter a number:");
	scanf("%f",&import);
 	if(max<import)
 	max=import;}
 	printf("The largest number entered was:%.2f\n",max);
    return 0;
}