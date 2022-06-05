#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Differance(int Arr[],int iLength)
{
	int iCnt=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin=Arr[iCnt];
		}
		else if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax-iMin;
}


int main()
{
	int iSize=0,iCnt=0,iNo=0;
	int *ptr=NULL;
	int iRet=0;
	printf("Enter size of elements: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	

	iRet=Differance(ptr,iSize);
	printf("Differance betweeen maximum and minimum number is: %d\n",iRet);

	free(ptr);
	return 0;
}