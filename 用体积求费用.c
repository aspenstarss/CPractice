#include <stdio.h>
int main(void)
{
	float H,L,W,V,M;
	
	printf("�����볤��");
	scanf("%f",&L);
	
	printf("��������");
	scanf("%f",&W);
	
	printf("������߶�");
	scanf("%f",&H);
	
	V = H * L * W;
	M = ( V + 165 ) / 166;
	
	printf("V=%.2fX%.2fX%.2f\n",L,H,W);
	printf("V:%.2f\n",V);
	printf("M:%.2f\n",M);
	return 0;
	
}
