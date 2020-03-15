#include <stdio.h> 
#include<ctype.h>
int main() {
	int i=0;
	char ch;
	printf("Enter a sentence: ");
	ch=getchar();
	while(ch==' '||ch=='\''||ch=='.')
		ch=getchar();
	ch=tolower(ch);
	while(ch!='\n') {
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
					i=i+1;
		ch=getchar();
		ch=tolower(ch);
	}
	printf("Your sentence contains %d vowels.\n",i);
	return 0;
}