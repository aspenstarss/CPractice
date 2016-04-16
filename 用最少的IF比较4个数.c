#include <stdio.h>
int main(void)
{
	int i1,i2,i3,i4;
	int l1,s1,l2,s2,l,s;
 	printf("Enter four numbers:");
	scanf("%d%d%d%d",&i1,&i2,&i3,&i4);
	if(i1>i2){
	l=i1;
	s=i2;}	
	else{
	l1=i2;
	s1=i1;}
	if(i4<i3){
	l=i3;
	s=i4;}
	else{
	l2=i4;
	s2=i3;}
	if(s1>s2)
	s=s2;
	else s=s1;
	if(l1>l2)
	l=l1;
	else l=l2; 
	printf("Largest:%d\n",l);
	printf("Smallest:%d\n",s);
    return 0;
}