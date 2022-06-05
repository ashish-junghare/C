#include<stdio.h>
void Display(int iValue)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		printf("#\t%d\t*\t",iCnt);
	}
}
int main()
{
	int iValue=0;

	printf("Enter number: \n");
	scanf("%d",&iValue);

	Display(iValue);
}