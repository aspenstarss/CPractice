#include<stdio.h>
#include<ctype.h>
#define max 20
int main ()
{
	char ch[max]={0},ch1,*p,*q;
	int i,j,n;
	
	printf("Enter your first and last name:");
	ch1=getchar();
	for(p=ch;p<ch+max;p++){
		if(ch1!='\n')
		*p=ch1;
		else break;
		ch1=getchar();
	}
	
	printf("You enered the name:");
		
	for(q=ch+1;q<=p;q++)
	{
		if(*q==' ');
		else if(*q==toupper(*q))
		{
			for(q;q<p;q++)
			printf("%c",*q);
			break;
		}
	}
	printf(",%c.\n",*ch);
	
	return 0;
}