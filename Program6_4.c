#include<stdio.h>


int CountFour(int iNo)
{
	int iDigit=0;
	int iFreq=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			iFreq++;
		}
		iNo=iNo/10;
	}
	return iFreq;

}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter any number: \n");
	scanf("%d",&iValue);

	iRet=CountFour(iValue);
	printf("Frequency of 4 is: %d\n",iRet);

	return 0;
}

//Time complexity : O(N)
//Where N is number of digit.