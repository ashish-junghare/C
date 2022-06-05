#include<stdio.h>
#include<stdlib.h>
int Summation(int Arr[],int iLength)
{	
	int iSum=0,i=0;

	for(i=0;i<iLength;i++)
	{
		iSum=iSum+Arr[i];
	}
	return iSum;

}

int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *ptr=NULL;
	printf("Enter number of element: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(sizeof(int)*iSize);

	printf("Enter values of array: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=Summation(ptr,iSize);
	printf("Addition is: %d\n",iRet);

	return 0;
}