#include <stdio.h>
int main()
{
    int b,x=9,y=5;
    b=x>y||x++==y--;
    printf("b=%d,x=%d,y=%d\n",b,x,y);
    return 0;
}
