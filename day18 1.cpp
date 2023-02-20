#include<stdio.h>
main()
{
	int n,i; 
	int l,ele;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d",&ele);
		if(i==1)
		l=ele;
		else if(ele<l)
		l=ele;
		i+=1;
	}
	printf("Lowest %d",l);
}

