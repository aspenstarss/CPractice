#include<stdio.h>
int main()
{
	double arr[]={1.78,1.65,1.62,1.75,1.76,1.78,1.80,1.75,1.85,1.73};
	int i,j;
	printf("*******≈≈–Ú«∞*******\n");
	for(i=0;i<=9;i++){
	if(i!=9)
		printf("%.2f,",arr[i]);
	else
		printf("%.2f",arr[i]);}
	for(i=8;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
			double temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	printf("\n*******≈≈–Ú∫Û*******\n");
	for(i=0;i<=9;i++){
	if(i!=9)
		printf("%.2f,",arr[i]);
	else
		printf("%.2f\n",arr[i]);}
	return 0;
} 