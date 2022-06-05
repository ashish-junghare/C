//Take numbers and disaplay even numbers 
#include<stdio.h>
#include<stdlib.h>


int CountEven(int Arr[],int ilength)
{
   register int iCnt=0;
   register int iEveCnt=0;
   for(iCnt=0;iCnt<ilength;iCnt++)
   {
      if(Arr[iCnt]%2==0)
      {
         iEveCnt++;
      }
   }
   return iEveCnt;
}


int main()
{
   int iSize=0,iCnt=0,iRet=0;
   int *ptr=NULL;
   printf("Enter how many numbers you want?\n");
   scanf("%d",&iSize);

   ptr=(int *)malloc(iSize*sizeof(int));

   printf("Enter elements:\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }

   iRet=CountEven(ptr,iSize);
   printf("Even numbers are: %d\n",iRet);
   
   free(ptr);
   return 0;
}