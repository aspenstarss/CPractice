#include <stdio.h>
int main()
{
    int arr[]={67,98,75,63,82,79,81,91,66,84};
    int sum=0,top,last,ran,i,j;
    float ave;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("�ܷ�=%d\n",sum);
    for(i=8;i>=0;i--)
        {
            for(j=0;j<=i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    printf("��߷�=%d\n��ͷ�=%d\n",arr[9],arr[0]);
    ave=sum/10;
    printf("ƽ����=%.2f\n",ave);
     printf("��������\n");
    for(i=9;i>=0;i--)
    {
       
		printf("%d\n",arr[i]);
    }
    return 0;
}