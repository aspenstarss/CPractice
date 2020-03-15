#include<stdio.h>
#include<ctype.h> 
int main(void)
{
	char ch[15]={0};
	int i;
	printf("Enter phone number:");
	for(i=0;i<15;i++){
		ch[i]=getchar();
		ch[i]=toupper(ch[i]) ;
	}
	printf("In numeric form:");
	for(i=0;i<15;i++){
		if(ch[i]=='A'||ch[i]=='B'||ch[i]=='C')
		printf("2");
		else if(ch[i]=='D'||ch[i]=='E'||ch[i]=='F')	
		printf("3");
		else if(ch[i]=='G'||ch[i]=='H'||ch[i]=='I')	
		printf("4");
		else if(ch[i]=='J'||ch[i]=='K'||ch[i]=='L')
		printf("5");
		else if(ch[i]=='M'||ch[i]=='N'||ch[i]=='O')	
		printf("6");
		else if(ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='S')	
		printf("7");
		else if(ch[i]=='T'||ch[i]=='U'||ch[i]=='V')	
		printf("8");
		else if(ch[i]=='W'||ch[i]=='X'||ch[i]=='Y')	
		printf("2");
		else
		putchar(ch[i]);
	
	}
	printf("\n");
	return 0;
}