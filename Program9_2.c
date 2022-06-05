#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iValue)
{
	int iCnt=0,iSumEve=0,iSumOdd=0,iDiff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iSumEve++;
		}
		else
		{
			iSumOdd++;
		}
	}
	iDiff=iSumEve-iSumOdd;
	return iDiff;
	
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
	iRet=Frequency(ptr,iSize,iNo);
	printf("Differance in frequency of even and odd is: %d\n",iRet);
	
	free(ptr);
	
	return 0;
}