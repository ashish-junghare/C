#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	int iCnt=0;
	printf("Number divisible by 5 and 3 is: \n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
}




int main()
{
	int iSize=0,iCnt=0;
	int* ptr=NULL;
	printf("Enter number of elements: \n");
	scanf("%d",&iSize);

	ptr=(int *)malloc(iSize*sizeof(int));

	printf("Enter elements: \n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	Display(ptr,iSize);
	free(ptr);
	return 0;
}