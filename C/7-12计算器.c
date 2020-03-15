#include <stdio.h>
int main() {
	float b,a;
	char ch;
	printf("Enter an expression: ");
	scanf("%f",&a);
	ch=getchar();
	while(ch!='\n') {
		scanf("%f",&b);
		switch (ch) {
			case '+':a=a+b;
			break;
			case '-':a=a-b;
			break;
			case '*':a=a*b;
			break;
			case '/':a=a/b;
			break;
		}
		ch=getchar();
	}
	printf("Value of expression: %.1f\n",a);
	return 0;
}