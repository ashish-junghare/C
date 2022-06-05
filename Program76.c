//Differance of max and min
#include<stdio.h>
#include<stdlib.h>

int DiffNum(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iMin=Arr[0];
	auto int iMax=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
		else if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax-iMin;
}

int main()
{
	auto int iSize=0,iRet=0;
	register int iCnt=0;
	auto int* ptr=NULL;
	printf("Enter number of elements: \n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=DiffNum(ptr,iSize);
	printf("Differance of max and min is: %d\n",iRet);

	free(ptr);

	return 0;
}