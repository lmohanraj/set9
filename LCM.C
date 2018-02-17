#include <stdio.h>
int main()
{
    int a,b,i,n;
    printf("input ");
    scanf("%d%d",&a,&b);
    if(a>b)
    n=a;
    else
    n=b;
    for(i=n;i<=a*b;i++)
    {
    	if((i%a==0)&&(i%b==0))
    	{
    printf("\n the lcm is %d",i);
    break;
    	}
    }
	return 0;
}
