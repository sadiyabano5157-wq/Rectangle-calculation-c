#include<stdio.h>
int main()
{
	int area,length,width;
	printf("Enter a length:\n");
	scanf("%d",&length);
	
	printf("Enter a width:\n");
	scanf("%d",&width);
	
	area=length*width;
	printf("area of rectangle =%d\n",area);
	
	int pri=2*(length+width);
	printf("primetre of rectangle =%d\n",pri);
	return 0;
	
}
