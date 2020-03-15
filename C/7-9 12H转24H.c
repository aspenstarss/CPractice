#include <stdio.h> 
int main(void) {
	int h,m,a,b,mins;
	char ch;
	printf("Enter a 12-hour time: ");
	scanf("%d:%d",&h,&m);
	ch=getchar();
	while(ch==' ')
		ch=getchar();
	if(ch=='p'||ch=='pm'||ch=='P'||ch=='PM')
		h=h+12;
	printf("Equivalent 24-hour time: %d:%d\n",h,m);
	return 0;
}