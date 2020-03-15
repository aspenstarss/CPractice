#include<stdio.h>
#include<ctype.h>
#define NO ((ch-'A')+n)%26+'A'
#define no ((ch-'a')+n)%26+'a'

int main ()
{
	int i,j,n;
	char c[80]={0},ch;
	
	printf("Enter message to be encrypted:");
	for(j=0;j<80;j++){
		c[j]=getchar();
		if(c[j]=='\n')break;
	}
	
	printf("Enter shift amount (1-25):");
	scanf("%d",&n);
	
	printf("Encrypted message:");
	for(i=0;i<j;i++){
		ch=c[i];
		if(ch<'A')
		printf("%c",ch);
		else if(ch>'Z'&&ch<'a')
		printf("%c",ch);
		else if(ch>'z')
		printf("%c",ch);
		else if(ch==tolower(ch))
		printf("%c",no);
		else if(ch==toupper(ch))
		printf("%c",NO);
	}
	
	printf("\n");
	return 0;
}