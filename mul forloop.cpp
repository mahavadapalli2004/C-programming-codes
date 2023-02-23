#include<stdio.h>
main()
{
	int n,m;
	int mul;
	printf("enter the value of n:");
	scanf("%d",&n);
    for(m=1;m<=10;m++)
	{
		printf("\n%d*%d=%d",n,m,(n*m));
    }
	mul=n*m++;
}
