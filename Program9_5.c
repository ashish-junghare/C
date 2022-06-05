#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength,int iValue)
{
	int iCnt=0;
	int iFreq=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iValue)
		{
			iFreq++;
		}
	}
	return iFreq;
}




int main()
{
	int iSize=0,iCnt=0,iNo=0,iRet=0;
	int* ptr=NULL;
	printf("Enter number of elements: \n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter number to get frquency: \n");
	scanf("%d",&iNo);

	iRet=Display(ptr,iSize,iNo);
	printf("frequency of %d is: %d\n",iNo,iRet);
	
	free(ptr);
	
	return 0;
}