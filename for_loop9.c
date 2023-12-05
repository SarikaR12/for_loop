#include<stdio.h>
main()
{
	int i=1 ,n, fac=1;
	
	printf("Enter value N =");
	scanf("%d",&n);
	
	for(i=1;i<=n; i++)
	{
		printf("%d\n",i);
		fac=fac*i;
	}
	printf("factorial of 1 to N =%d",fac);
}