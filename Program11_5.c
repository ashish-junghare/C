#include<stdio.h>
#include<stdlib.h>

int SumDigit(int Arr[],int iLength)
{
	int iCnt=0,iDigit=0,iSum=0;

	printf("Summation of numbers is: \n");

	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=0;
		while(Arr[iCnt]!=0)
		{
			iDigit=Arr[iCnt]%10;
			iSum=iSum+iDigit;
			Arr[iCnt]=Arr[iCnt]/10;
		}
		printf("%d\n",iSum);
	}	
}


int main()
{
	int iSize=0,iCnt=0,iRet=0;
	int *ptr=NULL;
	printf("Enter size of elements: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	

	SumDigit(ptr,iSize);
	free(ptr);
	return 0;
}