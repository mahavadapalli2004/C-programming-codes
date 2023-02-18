#include<stdio.h>
main()
{
	int i;
	int fac,num;
	fac=i=1;
	printf("enter the number:");
	scanf("%d",&num);
	while(i<=num)
	{
		fac=fac*i;
		i++;
	}
	printf("factorial of %d is %d",num,fac);
}
