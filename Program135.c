//Factorial
#include<stdio.h>
int Factorial(int No)
{
	int iFact=1,i=0;
	for(i=1;i<=No;i++)
	{
		iFact*=i;
	}
	return iFact;
}


int main()
{
	int iValue1=0,iRet=0;

	printf("Enter value: \n");
	scanf("%d",&iValue1);

	iRet=Factorial(iValue1);

	printf("Factorial is: %d\n",iRet);
	
	return 0;
}