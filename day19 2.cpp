#include<stdio.h>
main()
{
	int rem,n,rev,t;
	printf("enter a number");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(t==rev)
	printf("palidrome");
	else
	printf("not");
}
