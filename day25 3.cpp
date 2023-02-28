#include<stdio.h>
main()
{
	int i,n,count,e,c;
	scanf("%d",&e);
	for(n=1;n<=e;n++){
	{
		count=0;c=1;
		for(i=2;i<=n/2;i++)
		if(n%i==0)
		{
			count++;
			break;
		}
	}while(c<=n-2){
	c+=1;
}
	if(count==0 && n!=1)
	printf("%d %d\n",c,n);c+=1;
    }
}

