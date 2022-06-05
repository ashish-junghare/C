#include<stdio.h>


int MultDigit(int iNo)
{
	int iDigit=0;
	int iMult=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if (iDigit==0)
		{
			iDigit=1;
		}
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	return iMult;

}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter any number: \n");
	scanf("%d",&iValue);

	iRet=MultDigit(iValue);
	printf("%d\n",iRet);

	return 0;
}

//Time complexity : O(N)
//Where N is number of digit.