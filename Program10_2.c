#include<stdio.h>
#include<stdlib.h>

int CheckIndex(int Arr[],int iLength,int iValue)
{
	int iCnt=0;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iValue)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
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
	
	printf("Enter element to search: \n");
	scanf("%d",&iNo);

	iRet=CheckIndex(ptr,iSize,iNo);
	if(iRet==-1)
	{
		printf("No element found\n");
	}
	else
	{
		printf("First occurance at index: %d\n",iRet);
	}
	
	return 0;
}