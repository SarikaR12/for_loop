#include<stdio.h>
main()
{
	int i,n;
	printf("Enter value number N =");
	scanf("%d",&n);
	printf("multipication table =\n");
	
	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",n,i ,n*i);
	}
}