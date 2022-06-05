#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iCnt=0;
	int iMax=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
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
	

	iRet=Maximum(ptr,iSize);
	printf("Maximum number is: %d\n",iRet);

	free(ptr);
	return 0;
}