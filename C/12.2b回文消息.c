#include<stdio.h>
#define max 100
int main()
{
	char hui[max],*p,*q;
	int i;
	printf("Enter a message:");
	p=&hui[0];
	q=&hui[0];
	for(p;p<&hui[max];p++)
	{
		*p=getchar();
		if(*p=='\n')
		break;
	}
	i=(p-q)/2;
	for(p--;p>=&hui[i];p--)
 	{
	 	if(*p!=*q)
	 	{
	 	printf("Not a palindrome\n");
	 	return 0;
	 	}
	 	else
	 	q++;
	 }
	 printf("Palindrome\n");
	 return 0;
}