#include <stdio.h> 
int main(void)
{
	int h,m,a,b,mins;
	char ch;
	printf("Enter a time: ");
	scanf("%d:%d",&h,&m);
	ch=getchar();
	while(ch==' ')
	ch=getchar(); 
	if(ch=='p'||ch=='pm'||ch=='P'||ch=='PM')
	h=h+12;
	mins=h*60+m; 
	
	a=(mins-480)*(mins-480);
	b=(mins-583)*(mins-583);
	if(a<b){
	printf("Closest departure time is 8:00 a.m. ,arriving at 10:16 a.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-679)*(mins-679);}
	
	if(a<b){
	printf("Closest departure time is 9:43 a.m. ,arriving at 11:52 a.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-767)*(mins-767);}
	
	if(a<b){
	printf("Closest departure time is 11:19 a.m. ,arriving at 1:31 p.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-840)*(mins-840);}
	
	if(a<b){
	printf("Closest departure time is 12:47 p.m. ,arriving at 3:00 p.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-945)*(mins-945);}
	
	if(a<b){
	printf("Closest departure time is 2:00 p.m. ,arriving at 4:08 p.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-1140)*(mins-1140);}
	
	if(a<b){
	printf("Closest departure time is 3:45 p.m. ,arriving at 5:55 p.m.\n");
	goto done;}
	else{
	a=b;
	b=(mins-1305)*(mins-1305);}
	
	if(a<b){
	printf("Closest departure time is 7:00 p.m. ,arriving at 9:20 p.m.\n");
	goto done;}
	else
	printf("Closest departure time is 9:45 p.m. ,arriving at 11:58 p.m.\n");
	
	done:;
	return 0;
}