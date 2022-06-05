#include<stdio.h>
int MultFactors(int iNo)
{
	int iMult=1;
	int iCnt=1;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);

	iRet=MultFactors(iValue);
	printf("Multiplication of fctors is: %d\n",iRet);

	return 0;
}

//Time Complexity : O(N/2)