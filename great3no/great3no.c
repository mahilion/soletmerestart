#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num1,num2,num3;
	printf("enter the numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("num1 %d is greater\n",num1);
		}else
		{
			printf("num3 %d is greater\n",num3);
		}
	}else
	{
		if(num2>num3)
		{
			printf("num2 %d is greater\n",num2);
		}else{
			printf("num3 %d is greater \n",num3 );
		}
	}
	return 0;
}