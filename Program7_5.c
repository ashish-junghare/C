#include<stdio.h>


int CountDiff(int iNo)
{
	int iDigit=0;
	int iSumEve=0;
	int iSumOdd=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSumEve=iSumEve+iDigit;
		}
		else
		{
			iSumOdd=iSumOdd+iDigit;
		}

		iNo=iNo/10;
	}
	return iSumEve-iSumOdd;

}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter any number: \n");
	scanf("%d",&iValue);

	iRet=CountDiff(iValue);
	printf("%d\n",iRet);

	return 0;
}

//Time complexity : O(N)
//Where N is number of digit.