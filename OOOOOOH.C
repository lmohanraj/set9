#include <stdio.h>
int main()
{
	int a[4],b[4],d[4],i;
	char ch;
	printf("inputs\n");
	for(i=0;i<=3;i++)
	{
	scanf("%d",&a[i]);
	scanf("%s",&ch);
	scanf("%d",&b[i]);
	if(ch=='/')
	{
	d[i]=a[i]/b[i];
	}
	if(ch=='%')
	{
	d[i]=a[i] % b[i];
	}
	}
printf("output :\n");
for(i=0;i<4;i++)
{
printf("%d\n",d[i]);
}
	return 0;
}
