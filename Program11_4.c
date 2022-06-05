#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
	int iCnt=0;
	int i=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		int iDigcount=0,Brr=0;
		Brr=Arr[iCnt];
		while(Arr[iCnt]!=0)
		{
			Arr[iCnt]=Arr[iCnt]/10;
			iDigcount++;
		}
		if (iDigcount==3)
		{
			printf("%d\t",Brr);
		}
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
	

	Digits(ptr,iSize);
	
	free(ptr);
	return 0;
}