#include <stdio.h>
int main()
{
    int a,b,i,g;
    printf("input ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
    	if((a%i==0)&&(b%i==0))
    	g=i;
    }
    printf("\n the gcd is %d",g);
	return 0;
}
