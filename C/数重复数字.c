#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int digit_seen[10]={0};
	int digit,i;
	long n;
	printf("Enter a number:");
	scanf("%ld",&n);
	while(n>0){
		digit=n%10;
		digit_seen[digit]++;
		n/=10;
		}
	for(i=0;i<10;i++)
	printf("%d:%d\n",i,digit_seen[i]);

	 return 0;
	}