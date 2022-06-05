#include<stdio.h>
int FactDiff(int iNo)
{
	int iSumFact=0;
    int iSumNonFact=0;
    int iDiffer=0;
	int iCnt=1;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSumFact=iSumFact+iCnt;
		}
	}
    iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
		{
			iSumNonFact=iSumNonFact+iCnt;
		}
	}
    iDiffer=iSumFact-iSumNonFact;
    return iDiffer;

}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);
	printf("Differance of factors and non factors is: %d\n",iRet);

	return 0;
}

//Time Complexity : O(?)