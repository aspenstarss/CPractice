#include <stdio.h> 
int main(void)
{
	int m2=99,d2=99,y2=99,mm,dm,ym;
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d",&mm,&dm,&ym);
	
	while(m2!=0&&d2!=0&&y2!=0)
		{
		if(ym<y2)
		{ym=ym;
		mm=mm;
		dm=dm;}
		if(ym==y2)
			{if(mm<m2)
			{ym=ym;
			mm=mm;
			dm=dm;}
			if(mm==m2)
				{if(dm<d2)
				{ym=ym;
				mm=mm;
				dm=dm;}
				if(dm==d2)
				{ym=ym;
				mm=mm;
				dm=dm;}
				if(dm>d2)
				{ym=y2;
				mm=m2;
				dm=d2;}}
			if(mm>m2)
			{ym=y2;
			mm=m2;
			dm=d2;}}
		if(ym>y2)
		{ym=y2;
		mm=m2;
		dm=d2;}
		
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d",&m2,&d2,&y2);
	}
	printf("%d/%d/%.2d is the earliest date\n",mm,dm,ym);
	return 0;
}