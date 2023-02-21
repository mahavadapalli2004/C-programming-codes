#include<stdio.h>
main()
{
	int n,t,r,sum=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
	r=t%10;
	sum=sum+(r*r*r);
	t=t/10;
    }
    if(sum==n)
    printf("armstrong");
    else
    printf("not");
}
