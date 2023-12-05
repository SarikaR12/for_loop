#include<stdio.h>
main()
{
	int i,n;
	printf("Enter value N =");
	scanf("%d",&n);
	
	for(i=1; n>=i; n--)
	{
		if(n%2==0)
		{
				printf("%d\n",n);
		}
	}
}
