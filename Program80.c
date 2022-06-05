//search first occurance
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Index(int Arr[],int iLength,int iNo)
{
	register int iCnt=0;
	for(iCnt=(iLength-1);iCnt>=0;iCnt--)
	{
		if(iNo==Arr[iCnt])
		{
			break;
		}
	}
	return iCnt;
	
}
int main()
{
	auto int iSize=0,iValue=0;
	auto int iRet=0;
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

	printf("Enter element to search: \n");
	scanf("%d",&iValue);

	iRet=Index(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("No such element\n");
	}
	else
	{
		printf("Element last occur at index: %d\n",iRet);
	}

	free(ptr);

	return 0;
}