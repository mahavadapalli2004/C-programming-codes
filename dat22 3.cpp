#include<stdio.h>
main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1,j=10;i<=n&&j<=n;i++,j--)
	printf("%d  %d\n",i,j);
}
