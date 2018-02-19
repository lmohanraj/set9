 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,j,c=0,n;
 	char s[20];
 	printf("input");
 	gets(s);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(s[i]==s[j])
 			{
 				c++;
 				break;
 			}
 		}
 	}
 	if(c==0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
