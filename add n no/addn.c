#include<stdio.h>
int main(void)
{
	int n,sum=0,i=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("the sum is %d\n", sum);
	return 0;
}
