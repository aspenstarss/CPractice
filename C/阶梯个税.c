#include <stdio.h>
int main()
{
	float icome,tax;
	printf("Enter icome:");
	scanf("%f",&icome);
 	if(icome<=750)
	tax=icome*0.01;
	else if(icome<=2250)
	tax=(icome-750)*0.02+7.5;
	else if(icome<=3750)
	tax=(icome-2250)*0.03+37.5;
	else if(icome<=5250)
	tax=(icome-3750)*0.04+82.5;
	else if(icome>5250)
	tax=(icome-5250)*0.05+142.5;
	printf("The tax is:%.2f\n",tax);
    return 0;
}