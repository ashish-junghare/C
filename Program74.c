//Smallest number in N numbers
#include<stdio.h>
#include<stdlib.h>

int MinNum(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iMin=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
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

	iRet=MinNum(ptr,iSize);
	printf("Minimum is: %d\n",iRet);

	free(ptr);

	return 0;
}