#include<stdio.h>

int Accept(int iNo)
{
	while(iNo>0)
	{
		printf("*");
		iNo--;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);

	Accept(iValue);

	return 0;
}