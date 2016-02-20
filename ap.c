#include<stdio.h>

int main(void)
{
	int i,n,x,ch,d;
	printf("enter the starting number,no of terms,difference");
	scanf("%d%d%d",&x,&n,&d);
	printf("a.p is");
	for(i=0;i<n;i++)
	{
		printf("%d\n",x);
		x=x+d;
	}
		
return 0;
}
