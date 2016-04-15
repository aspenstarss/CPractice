#include <stdio.h>
int main(void)
{
	float H,L,W,V,M;
	
	printf("请输入长度");
	scanf("%f",&L);
	
	printf("请输入宽度");
	scanf("%f",&W);
	
	printf("请输入高度");
	scanf("%f",&H);
	
	V = H * L * W;
	M = ( V + 165 ) / 166;
	
	printf("V=%.2fX%.2fX%.2f\n",L,H,W);
	printf("V:%.2f\n",V);
	printf("M:%.2f\n",M);
	return 0;
	
}