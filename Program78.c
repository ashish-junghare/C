//Differance of max and min
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
	register int iCnt=0;
	auto bool bFlag=false;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iNo==Arr[iCnt])
		{
			bFlag=true;
			break;
		}

	}
	return bFlag;
}
int main()
{
	auto int iSize=0,iValue=0;
	bool bRet=0;
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

	bRet=Search(ptr,iSize,iValue);
	if(bRet==true)
	{
		printf("Element present in array\n");
	}
	else
	{
		printf("Element absent in array\n");
	}
	
	

	free(ptr);

	return 0;
}