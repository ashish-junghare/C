#include<stdio.h>


int CountRange(int iNo)
{
	int iDigit=0;
	int iCount=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<7 && iDigit>3)
		{
			iCount++;
		}
		iNo=iNo/10;
	}
	return iCount;

}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter any number: \n");
	scanf("%d",&iValue);

	iRet=CountRange(iValue);
	printf("%d\n",iRet);

	return 0;
}

//Time complexity : O(N)
//Where N is number of digit.