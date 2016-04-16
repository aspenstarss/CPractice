#include<stdio.h>
#include<ctype.h>
int main ()
{
	char ch,ch1,f;
	
	printf("Enter your first and last name:");
	ch=getchar();
	while(ch==' ')
	ch=getchar();
	f=ch;
	
	ch=getchar();
	ch1=toupper(ch);
	while(ch!=ch1){
	ch=getchar();
	ch1=toupper(ch);
	}
	
	while(ch==' ')
	ch=getchar();
	
	while(ch!='\n'){
		printf("%c",ch);
		ch=getchar();
	}
	
	printf(",%c.",f);
	printf("\n");
	
	return 0;
}