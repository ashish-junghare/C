#include<stdio.h>


int EvenDigit(int iNo)
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
		if(iDigit%2==0)
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

	iRet=EvenDigit(iValue);
	printf("%d\n",iRet);

	return 0;
}

//Time complexity : O(N)
//Where N is number of digit.