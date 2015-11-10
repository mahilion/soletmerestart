#include<stdio.h>
int main(void)
{

int base,height,area;
printf("enter the length of base in m :");
scanf("%d",&base);
printf("enter the length of height in m :");
scanf("%d",&height);
area=0.5*base*height;
printf("the area of the triangle with base %d\n and height %d is %d meter square\n",base,height,area);
printf("done\n");
return 0;
}
