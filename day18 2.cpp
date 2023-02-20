#include<stdio.h>
main()
{
	int n,h,ele,i;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d",&ele);
		if(i==0)h=ele;
		if(ele>h)h=ele;
		i++;
	}
	printf("highest %d",h);
}
