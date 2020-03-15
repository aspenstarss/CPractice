#include<stdio.h>
#include<ctype.h>
int main ()
{
	char ch[20]={0},ch1;
	int i,j,n;
	
	printf("Enter your first and last name:");
	ch1=getchar();
	for(i=0;i<20;i++){
		if(ch1!='\n')
		ch[i]=ch1;
		else break;
		ch1=getchar();
	}
	
	printf("You enered the name:");
		
	for(j=1;j<i;j++){
	ch1=ch[j];
	if(ch1==' ');
	else if(ch1==toupper(ch1)){
		for(;j<i;j++)
		printf("%c",ch[j]);
	}
	}
	printf(",%c.",ch[0]);
	printf("\n");
	
	return 0;
}