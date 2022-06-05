#include<stdio.h>
int ReverseFact(int iNo)
{
	int iCnt=iNo;
	for(iCnt=(iNo)/2;iCnt>0;iCnt--)
	{
		if((iNo%iCnt)==0)
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

	ReverseFact(iValue);

	return 0;
}
//Time Complexity : O(N/2)