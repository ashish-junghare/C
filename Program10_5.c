#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
	int iCnt=0,iMult=1;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2!=0)
		{
			iMult=iMult*Arr[iCnt];
		}
	}
	if(iCnt==iLength)
	{
		iMult=0;
		return iMult;
	}
	else
	{
		return iMult;
	}
}




int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int* ptr=NULL;
	printf("Enter number of elements: \n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=Product(ptr,iSize);
	printf("product of odd numbers is: %d\n",iRet);
	
	free(ptr);
	
	return 0;
}