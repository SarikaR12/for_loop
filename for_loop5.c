#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter value N =");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}  	
}
