# div-without-operator
#include<stdio.h>
main()
{
	int a,b,c=0,d=0,i;
	printf("enter a and b");
	scanf("%d\n%d",&a,&b);
	while(a>0)
	{
		d=a-b;
		a=d;
		c=c+1;
		i++;
	}
	printf("quotient is %d",c);
	
}
