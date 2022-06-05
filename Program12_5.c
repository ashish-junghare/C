#include<stdio.h>

void Display(int iValue)
{
	int iCnt=1,i=0;
	while(i<iValue)
	{
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
			i++;
		}
		iCnt++;
	}
}
int main()
{
	int iValue=0;

	printf("Enter number: \n");
	scanf("%d",&iValue);

	Display(iValue);
}