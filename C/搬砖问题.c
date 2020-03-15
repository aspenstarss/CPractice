#include <stdio.h>
int main()
{
	float mz=4,fz=3,cz=0.5;
	int m,f,c,z,p;
	for(m=0;m<=9;m++)
	{
	  for(f=0;f<=12;f++)
		{
		  for(c=0;c<=72;c++)
			{
				z=mz*m+fz*f+cz*c;
				p=m+f+c;
				if(z==36&&p==36)
				{
					if(c%2==0)
					{
						printf("需要男人=%d人\n需要女人=%d人\n需要小孩=%d人\n",m,f,c);
					}
				}
			}
		}
	}
} 