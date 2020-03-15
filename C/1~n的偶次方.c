#include <stdio.h> 
int main(void) {
	int m=0,n,i=0,x;
	printf("Enter a number:");
	scanf("%d",&n);
	x=4;
	while(x<n) {
		i=i+2;
		x=(i+2)*(i+2);
		m=i*i;
		printf("square:\t%d\n",m);
	}
	return 0;
}