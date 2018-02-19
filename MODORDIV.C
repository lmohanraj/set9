  #include<stdio.h>
 int main()
 {
 	int a[8],i,j;
 	char c[4];
 	printf("input");
 	for(i=0;i<8;i+=2)
 	{
 		scanf("%d",&a[i]);
 		for(j=0;j<4;j++)
 		scanf("%c",&c[j]);
 		scanf("%d",&a[i+1]);
 	}
 	a[0]=a[0]/a[1];
 	a[2]=a[2]%a[3];
 	a[4]=a[4]/a[5];
 	a[6]=a[6]%a[7];
 	printf("%d\n%d\n%d\n%d",a[0],a[2],a[4],a[6]);
 	return 0;
 }
