#include <stdio.h>
int main(void)
{
	int i,n,j=1;
	char ch;
	printf("Enter number of entries in table:");
	scanf("%d",&n);
 
 	for(i=1;i<=n;i++){
 		
 	printf("%10d%10d\n",i,i*i);
	 
	 	if (i%24==0){
 			printf("Press Enter to continue...\n");
 			if(i==24)
 			ch=getchar();
		 	ch=getchar();
		 }
	 }
 	
 	
    return 0;
}