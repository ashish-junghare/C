#include<stdio.h>
#include<stdlib.h>

int DispalyDiff(int Arr[],int iLength)
{
	int iCnt=0,iSumEve=0,iSumOdd=0,iDiff=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iSumEve=iSumEve+Arr[iCnt];
		}
		else
		{
			iSumOdd=iSumOdd+Arr[iCnt];
		}
		
	}
	iDiff=iSumEve-iSumOdd;
	return iDiff;

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
	iRet=DispalyDiff(ptr,iSize);
	printf("Differance is: %d\n",iRet);

	free(ptr);

	return 0;
}