#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NO_WAY (a[i+1][j]!='.'&&a[i-1][j]!='.'&&a[i][j+1]!='.'&&a[i][j-1]!='.')

int main()
{
    /*随机步法，就是在一个10*10的矩阵上随机的连续的显示出A~Z*/
	char a[11][11];
    int i,j,fx,m;
    /*将这个 10*10的矩阵全部表示成‘.’*/
    for(i=0;i<10;i++) {	 
    	for(j=0;j<10;j++) {
			a[i][j]='.';
		}
    }
	
	/*将11行11列表示成非'.'字符'!'，以便判断边线上三周被堵的情况*/ 
    for(i=0;i<10;i++) {
    	a[i][10] = '!';
	}
	for(i=0;i<10;i++) {
    	a[10][i] = '!';
	}
    /*将左上角的元素赋成‘A’*/	
   	a[0][0]='A';
   	i=0;j=0;
   	srand((unsigned) time(NULL));
   	/*下面随机对元素进行赋值*/
   	/*‘A’+m表示A~z中的数字*/
   	for(m=1;m<26;m++){
   		/*产生变化方向*/
	   	fx=rand()% 4;
		/*向下*/
	   	if(fx==1){
	   		i=i+1;
	   		if(i>9){i--;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {i--;m=m-1;}
	   	}
	   /*向右*/
  		else if(fx==2){
	   		j=j+1;
	   		if(j>9){j--;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {j--;m=m-1;}
	   }
	   /*向上*/
	   else if(fx==3){
	   		i=i-1;
	   		if(i<0){i++;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {i++;m=m-1;}
	   }
	   /*向左*/
	   else if(fx==0){
	   		j=j-1;
	   		if(j<0){j++;m=m-1;}
	   		else if(a[i][j]=='.')a[i][j]='A'+m;
	   		else {j++;m=m-1;}
	   }
	   /*四周被堵就结束*/ 
		if (NO_WAY) {	
			break;
		}
	}
	/*依次输出这个矩阵*/   
   	for(i=0;i<10;i++)
    	for(j=0;j<10;j++){
	    	printf("%2c",a[i][j]);
	    	/*每达到10个元素换行*/
	    	if(j==9)printf("\n");
	    }
   	printf("\n");
    return 0;
}
