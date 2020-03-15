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

/*����12���µ�����*/ 
const int days[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 

/*�ж��Ƿ�Ϊ����*/
int isLeapYear(int year)  
{ 
 if(((year%4==0)&&(year%100!=0))
    ||(year%400==0)) 
 {
  return 1; 
 }
 return 0; 
}

/*����ת��1970��1��1���������*/ 
long date2sec(date d)
{ 
 long sum=0; 
 int i;

 //�ۼ��������������
 for(i=YEAR;i<d.year;i++) 
 { 
  sum+=365; 
  if(isLeapYear(i)) 
  {//�����һ��
   sum+=1; 
  }
 }
 //�ۼƵ����������µ�����
 for(i=0;i<d.month;i++)
 {
  sum+=days[i];
 }
 if(d.month>2)
 {
  if(isLeapYear(i)) 
  {//�����һ��
   sum+=1; 
  }
 }
 //�ۼƵ��굱�µ�����
 sum+=d.day-1; 
 //ת������
 sum=sum*24*60*60; 
 
 //�ӵ����Сʱ�����ӣ���
 sum+=d.hour*60*60+d.min*60+d.sec;
 //����������
 return sum; 
} 

/*����ת��1970��1��1���������*/ 
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
 //�����ж�����
 while(1)
 {
  sum=365; 
  if(isLeapYear(d.year)) 
  {//�����һ��
   sum+=1; 
  }
  if(ds<sum)
  {//����һ����
   break;
  }
  d.year++;
  ds-=sum;
 }

 //�����ж�����
 while(1)
 {
  sum=days[d.month-1];
  if(d.month==2)
  {
   if(isLeapYear(d.year)) 
   {//�����һ��
    sum+=1; 
   }
  }
  if(ds+1<sum)
  {//����һ����
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

 puts("����������(��ʽΪ2008-08-08 08:08:08)��");
 scanf("%d-%d-%d %d:%d:%d",&d.year,&d.month,&d.day,&d.hour,&d.min,&d.sec);
 sec=date2sec(d);
 printf("������ʱ��%d��!\n",sec);
 puts("�뵽����ʱ���������");
 scanf("%d",&sec);
 d=sec2date(sec);
 printf("����Ϊ:%d-%d-%d %d:%d:%d\n",d.year,d.month,d.day,d.hour,d.min,d.sec);
}