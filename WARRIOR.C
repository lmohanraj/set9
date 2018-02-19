#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f;
    printf("enter the three set of values\n\n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    a=abs(a-b);
    c=abs(c-d);
    e=abs(e-f);
    printf("%d\n%d\n%d",a,c,e);
	return 0;
}
