#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter value N = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	
	}
	printf("sum of 1 to N =%d",sum);
}
	

