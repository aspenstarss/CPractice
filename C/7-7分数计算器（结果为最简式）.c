#include <stdio.h> 
int main(void)
{
	int num1,denom1,num2,denom2,result_num,result_denom;
	int m,n,y;
	char ch;
	
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d",&num1,&denom1);
	ch=getchar();
	if(ch=='+'){
	scanf("%d/%d",&num2,&denom2);
	result_num=num1*denom2+num2*denom1;
	result_denom=denom1*denom2;
	m=result_num;n=result_denom;
	while (n>0){
	y=m%n;
	m=n;
	n=y;}
	result_num=result_num/m;
	result_denom=result_denom/m;
	printf("The sum is %d/%d\n",result_num,result_denom);}
	if(ch=='-'){
	scanf("%d/%d",&num2,&denom2);
	result_num=num1*denom2-num2*denom1;
	result_denom=denom1*denom2;
	m=result_num;n=result_denom;
	while (n>0){
	y=m%n;
	m=n;
	n=y;}
	result_num=result_num/m;
	result_denom=result_denom/m;
	printf("The sum is %d/%d\n",result_num,result_denom);}
	if(ch=='*'){
	scanf("%d/%d",&num2,&denom2);
	result_num=num1*num2;
	result_denom=denom1*denom2;
	m=result_num;n=result_denom;
	while (n>0){
	y=m%n;
	m=n;
	n=y;}
	result_num=result_num/m;
	result_denom=result_denom/m;
	printf("The sum is %d/%d\n",result_num,result_denom);}
	if(ch=='/'){
	scanf("%d/%d",&num2,&denom2);
	result_num=num1*denom2;
	result_denom=denom1*num2;
	m=result_num;n=result_denom;
	while (n>0){
	y=m%n;
	m=n;
	n=y;}
	result_num=result_num/m;
	result_denom=result_denom/m;
	printf("The sum is %d/%d\n",result_num,result_denom);}
	return 0;
}