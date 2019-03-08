#include <stdio.h> 
void find_closest_flight(int mins,int *departure_time,int *arrival_time);
int main(void)
{
	int h,m,mins;
	int departure_time,arrival_time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&h,&m);
	mins=h*60+m; 
	find_closest_flight(mins,&departure_time,&arrival_time);
	return 0;
}
void find_closest_flight(int mins,int *departure_time,int *arrival_time) 
{
	int time[8]={480,583,679,767,840,945,1140,1305};
	int a,b,n,i;
	a=(mins-480)*(mins-480);
	b=(mins-583)*(mins-583);
	if(a>b){a=b;n=1;}
	else n=0;
	for(i=1;i<8;i++){
		b=(mins-time[i])*(mins-time[i]);
		if(a>b){a=b;n=i;}
	}
	switch(n){
		case 0:printf("Closest departure time is 8:00 a.m. ,arriving at 10:16 a.m.\n");break;
		case 1:printf("Closest departure time is 9:43 a.m. ,arriving at 11:52 a.m.\n");break;
		case 2:printf("Closest departure time is 11:19 a.m. ,arriving at 1:31 p.m.\n");break;
		case 3:printf("Closest departure time is 12:47 p.m. ,arriving at 3:00 p.m.\n");break;
		case 4:printf("Closest departure time is 2:00 p.m. ,arriving at 4:08 p.m.\n");break;
		case 5:printf("Closest departure time is 3:45 p.m. ,arriving at 5:55 p.m.\n");break;
		case 6:printf("Closest departure time is 7:00 p.m. ,arriving at 9:20 p.m.\n");break;
		case 7:printf("Closest departure time is 9:45 p.m. ,arriving at 11:58 p.m.\n");break;
	}
}