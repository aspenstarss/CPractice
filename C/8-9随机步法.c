#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NO_WAY (a[i+1][j]!='.'&&a[i-1][j]!='.'&&a[i][j+1]!='.'&&a[i][j-1]!='.')

int main()
{
    /*���������������һ��10*10�ľ������������������ʾ��A~Z*/
	char a[11][11];
    int i,j,fx,m;
    /*����� 10*10�ľ���ȫ����ʾ�ɡ�.��*/
    for(i=0;i<10;i++) {	 
    	for(j=0;j<10;j++) {
			a[i][j]='.';
		}
    }
	
	/*��11��11�б�ʾ�ɷ�'.'�ַ�'!'���Ա��жϱ��������ܱ��µ����*/ 
    for(i=0;i<10;i++) {
    	a[i][10] = '!';
	}
	for(i=0;i<10;i++) {
    	a[10][i] = '!';
	}
    /*�����Ͻǵ�Ԫ�ظ��ɡ�A��*/	
   	a[0][0]='A';
   	i=0;j=0;
   	srand((unsigned) time(NULL));
   	/*���������Ԫ�ؽ��и�ֵ*/
   	/*��A��+m��ʾA~z�е�����*/
   	for(m=1;m<26;m++){
   		/*�����仯����*/
	   	fx=rand()% 4;
		/*����*/
	   	if(fx==1){
	   		i=i+1;
	   		if(i>9){i--;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {i--;m=m-1;}
	   	}
	   /*����*/
  		else if(fx==2){
	   		j=j+1;
	   		if(j>9){j--;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {j--;m=m-1;}
	   }
	   /*����*/
	   else if(fx==3){
	   		i=i-1;
	   		if(i<0){i++;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {i++;m=m-1;}
	   }
	   /*����*/
	   else if(fx==0){
	   		j=j-1;
	   		if(j<0){j++;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {j++;m=m-1;}
	   }
	   /*���ܱ��¾ͽ���*/ 
		if (NO_WAY) {	
			break;
		}
	}
	/*��������������*/   
   	for(i=0;i<10;i++)
    	for(j=0;j<10;j++){
	    	printf("%2c",a[i][j]);
	    	/*ÿ�ﵽ10��Ԫ�ػ���*/
	    	if(j==9)printf("\n");
	    }
   	printf("\n");
    return 0;
}
