#include<stdio.h>
#include<stdlib.h>

int SumAll(int Arr[],int iLength)
{
	int iCnt=0,iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];

	}
	return iSum;

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
	iRet=SumAll(ptr,iSize);
	printf("Addition is: %d\n",iRet);

	free(ptr);

	return 0;
}