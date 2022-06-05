//Large number in N numbers
#include<stdio.h>
#include<stdlib.h>

int LargeNum(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iMax=Arr[0];
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;

}




int main()
{
	auto int iSize=0,iRet=0;
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

	iRet=LargeNum(ptr,iSize);
	printf("Max is: %d\n",iRet);

	free(ptr);

	return 0;
}

