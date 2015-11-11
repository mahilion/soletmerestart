#include <stdio.h>
int main(void)
{
int op1,op2,res;
int n;
printf("enter operand 1: ");
scanf("%d",&op1);
printf("enter operand 2: ");
scanf("%d",&op2);
printf("enter your choice: 1.ADD\n 2.SUBTRACT\n3.MULTIPLY \n4.DIVISION");
res=0;
scanf("%d",&n);
switch(n)
{
case 1:res=op1+op2;
break;
case 2:res=op1-op2;
break;
case 3:res=op1*op2;
break;
case 4:res=op1/op2;
break;
default:printf("invalid input try again\n");
break;
}
printf("the result of operation is %d",res);
return 0;
}
