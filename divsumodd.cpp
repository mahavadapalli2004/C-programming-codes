#include<stdio.h>
main()
{
	int i;
	int even,odd;
	i=1;
	even=odd=0;
	while(i<=20)
	{
	    if(i%5==0)	
		printf("\t%d",i);
		i++;
    }
    {
	    if(i%2==0)
		 even=even+1;
		else
		 odd=odd+1;
	printf("\nevensum=%d" ,even ); 
	printf("\noddsum=%d",odd);
    }
}
