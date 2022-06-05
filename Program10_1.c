#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Check(int Arr[],int iLength,int iValue)
{
	int iCnt=0;
	int bFlag=false;

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iValue)
		{
			bFlag=true;
			break;
		}
	}
	return bFlag;
}


int main()
{
	int iSize=0,iCnt=0,iNo=0;
	int *ptr=NULL;
	bool bRet=false;
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

	bRet=Check(ptr,iSize,iNo);
	if(bRet==true)
	{
		printf("Element is present\n");
	}
	else
	{
		printf("Element is absent\n");
	}
	return 0;
}