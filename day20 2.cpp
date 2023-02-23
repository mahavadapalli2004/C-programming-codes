#include<stdio.h>
main()
{
	int i,n,esum,osum,diff;
	esum=osum=diff=0;
	i=1;
	scanf("%d ",&n);
	while(i<=n)
		{
			printf("%d\n",i);
			if(i%2==0)esum=esum+i;
			else osum=osum+i;
			i++;
		}
	printf("\n evensum=%d",esum);
	printf("\n oddsum=%d",osum);
	diff=osum-esum;
	printf("\n the diff of evev and odd sum is  %d",diff);
}
