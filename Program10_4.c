#include<stdio.h>
#include<stdlib.h>

int CheckIndex(int Arr[],int iLength,int iValue1,int iValue2)
{
	int iCnt=0;
	printf("Elments in range are: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((iValue1<Arr[iCnt])&&(iValue2>Arr[iCnt]))
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}


int main()
{
	int iSize=0,iCnt=0,iNo1=0,iNo2=0;
	int *ptr=NULL;
	printf("Enter size of elements: \n");
	scanf("%d",&iSize);

	ptr=(int*)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter starting element in range : \n");
	scanf("%d",&iNo1);
	printf("Enter last element in range: \n");
	scanf("%d",&iNo2);

	CheckIndex(ptr,iSize,iNo1,iNo2);

	return 0;
}