#include <ctype.h> 
#include <stdio.h>
int main() {
	int i,sum=0;
	char ch;
	printf("Enter a word:");
	while((ch=getchar())!='\n') {
		ch=toupper(ch);
		switch(ch) {
			case 'A':case 'E':case 'I':case 'L':case 'N':
			case 'O':case 'R':case 'S':case 'T':case 'U':
				sum=sum+1;
				break;
			case 'D': case 'G':	
				sum=sum+2;
				break;
			case 'B':case 'C':case 'M':	case 'P':
				sum=sum+3;
				break;
			case 'F':case 'H':case 'V':	case 'W':case 'Y':
				sum=sum+4;
				break;
			case 'K':
				sum=sum+5;
				break;
			case 'J':case 'X':
				sum=sum+8;
				break;
			case 'Q':case 'Z':
				sum=sum+10;
				break;
			default:
				printf("��������ȷ����ĸ");
			break;
		}
	}
	printf("Scrabble value: %d\n",sum);
	return 0;
}