#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num,sum=0,rem;
	printf("enter the digit to add:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
        num=num/10; 
	}
	printf("the sum of the digits is %d\n",sum );
	return 0;
}
