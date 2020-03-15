#include <ctype.h> 
#include <stdio.h>

int main()
{
	int i,n,sum=0;
	char ch;
	char zm[26]={0};
	
	for(i=0;i<26;i++)
		zm[i]='A'+i;
	printf("Enter a word:");
	while((ch=getchar())!='\n'){
		ch=toupper(ch);
		for(i=0;i<26;i++){
			if(ch==zm[i])n=i;}	
		switch(n){
		case 0:case 4:case 8:case 11:case 13:
		case 14:case 17:case 18:case 19:case 20:
		sum=sum+1;break;
		case 3: case 6:	
		sum=sum+2;break;
		case 1:case 2:case 12:case 15:
		sum=sum+3;break;
		case 5:case 7:case 21:case 22:case 24:
		sum=sum+4;break;
		case 10:
		sum=sum+5;break;
		case 9:case 23:
		sum=sum+8;break;
		case 16:case 25:
		sum=sum+10;break;
		default:
		printf("请输入正确的字母");break;
		}
	}
	printf("Scrabble value: %d\n",sum);
    return 0;
}
