#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	int iCnt=0,iFreq=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iFreq++;
		}
	}
	return iFreq;
}




int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *iPtr=NULL;

	printf("Enter number of elements: \n");
	scanf("%d",&iSize);

	iPtr=(int *)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);
	}
	
	iRet=Display(iPtr,iSize);
	printf("Frequency of 11 is: %d\n",iRet);

	free(iPtr);

	return 0;
}