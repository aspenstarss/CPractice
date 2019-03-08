#include <stdio.h>
int main()
{
	float a,i,j;
	char ch;
    printf("Enter a sentence: ");
    
	ch=getchar();
	
	while(ch!='\n'){
		while(ch!=' '&&ch!='\n'){
			j=j+1;
			ch=getchar();
		}
			i=i+1;
			if(ch=='\n')
			break;
			ch=getchar();
	}
	a=j/i;
    printf("Average word length: %.1f\n",a);
    return 0;
}