#include <stdio.h> 
int main(void)
{
	int h,m,a,b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&h,&m);
	if(h<=12){
	a=h;
	printf("Equivalent 12-hour time: %d:%dAM\n",a,m);
	}
	else{
	a=h-12;
	printf("Equivalent 12-hour time: %d:%dPM\n",a,m);}
	return 0;
}