#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL DisplayDigit(int iNo)
{
	int iDigit=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			break;
		}
		iNo=iNo/10;
	}
	if(iNo==0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	

}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter any number: \n");
	scanf("%d",&iValue);

	bRet=DisplayDigit(iValue);
	if(bRet==FALSE)
	{
		printf("There is no zero\n");
	}
	else
	{
		printf("It contain zero\n");
	}
	return 0;
}
