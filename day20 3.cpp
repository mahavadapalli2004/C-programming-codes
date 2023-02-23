#include<stdio.h>
main()
{
	int i,n,f;
	i=1;
	f=1;
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial is %d",f);
}
