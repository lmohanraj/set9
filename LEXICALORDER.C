 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,j,n;
 	char s[20],t;
 	printf("input");
 	gets(s);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			if(s[i]<s[j])
 			{
 				 t=s[i];
 				 s[i]=s[j];
 				 s[j]=t;
 				 
 			}
 		}
 	}
 	 puts(s);
 	return 0;
 }
