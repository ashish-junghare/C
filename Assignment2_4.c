#include<stdio.h>

int Display(int iNo,int iFrequency)
{
	int i=0;
	if(iFrequency<0)
	{
		iFrequency = -iFrequency;
	}
	for(i=0;i<iFrequency;i++)
	{
		printf("%d\t",iNo);
	}
}
int main()
{
	int iValue=0;
	int iCount=0;
	printf("Enter number \n");
	scanf("%d",&iValue);

	printf("Enter frequency:  \n");
	scanf("%d",&iCount);

	Display(iValue,iCount);


	return 0;
}