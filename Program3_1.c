#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=1;
	while(iCnt<=iNo)
	{
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
	}


}

int main()
{
	int iValue=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);

	PrintEven(iValue);

	return 0;
}