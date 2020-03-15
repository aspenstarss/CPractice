#include <stdio.h> 

#define YEAR 1970
typedef struct
{
 int year;
 int month;
 int day;
 int hour;
 int min;
 int sec;
} date;

/*储存12个月的天数*/ 
const int days[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 

/*判断是否为闰年*/
int isLeapYear(int year)  
{ 
 if(((year%4==0)&&(year%100!=0))
    ||(year%400==0)) 
 {
  return 1; 
 }
 return 0; 
}

/*日期转成1970年1月1日起的天数*/ 
long date2sec(date d)
{ 
 long sum=0; 
 int i;

 //累计以往各年的天数
 for(i=YEAR;i<d.year;i++) 
 { 
  sum+=365; 
  if(isLeapYear(i)) 
  {//闰年多一天
   sum+=1; 
  }
 }
 //累计当年以往各月的天数
 for(i=0;i<d.month;i++)
 {
  sum+=days[i];
 }
 if(d.month>2)
 {
  if(isLeapYear(i)) 
  {//闰年多一天
   sum+=1; 
  }
 }
 //累计当年当月的天数
 sum+=d.day-1; 
 //转换成秒
 sum=sum*24*60*60; 
 
 //加当天的小时，分钟，秒
 sum+=d.hour*60*60+d.min*60+d.sec;
 //返回总秒数
 return sum; 
} 

/*日期转成1970年1月1日起的天数*/ 
date sec2date(long sec)
{
 date d={YEAR,1,1,0,0,0};
 int ds,sum;

 ds=sec/(24*60*60);
 sec-=ds*(24*60*60);
 d.hour=sec/(60*60);
 sec-=d.hour*(60*60);
 d.min=sec/60;
 sec-=d.min*60;
 d.sec=sec;
 //计算有多少年
 while(1)
 {
  sum=365; 
  if(isLeapYear(d.year)) 
  {//闰年多一天
   sum+=1; 
  }
  if(ds<sum)
  {//不足一年了
   break;
  }
  d.year++;
  ds-=sum;
 }

 //计算有多少月
 while(1)
 {
  sum=days[d.month-1];
  if(d.month==2)
  {
   if(isLeapYear(d.year)) 
   {//闰年多一天
    sum+=1; 
   }
  }
  if(ds+1<sum)
  {//不足一月了
   d.day+=ds;
   break;
  }
  d.month++;
  ds-=sum;
 }
 return d;
}

main()
{
 long sec;
 date d;

 puts("请输入日期(格式为2008-08-08 08:08:08)：");
 scanf("%d-%d-%d %d:%d:%d",&d.year,&d.month,&d.day,&d.hour,&d.min,&d.sec);
 sec=date2sec(d);
 printf("到格林时间%d秒!\n",sec);
 puts("请到格林时间的秒数：");
 scanf("%d",&sec);
 d=sec2date(sec);
 printf("日期为:%d-%d-%d %d:%d:%d\n",d.year,d.month,d.day,d.hour,d.min,d.sec);
}