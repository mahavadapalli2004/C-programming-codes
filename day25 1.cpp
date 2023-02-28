#include<stdio.h>
main()
{
	int n,t,sum,r,e;
	scanf("%d",&e);
      //	scanf("%d",&n);
	for(n=1;n<=e;n++){
	
	sum=0;
	t=n;
	while(t>0)
	{
		r=t%10;
		sum=sum+(r*r*r);
		t=t/10;
	}
	if(sum==n)
	printf("%d\n",n);
//	else
//	printf("not");
   }
   printf("\n");
}
   
