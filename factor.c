#include<stdio.h>
void main()
{
	int i=1,n,ans=1;
	printf("Enter a no.:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d",i);
		
		}i++;
	}	
}
