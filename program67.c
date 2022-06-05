//Take numbers and disaplay even numbers 
#include<stdio.h>
#include<stdlib.h>


int DisplayEven(int Arr[],int ilength)
{
   int iCnt=0;
   int iEveCnt=0;
   printf("Even elements are: \n");
   for(iCnt=0;iCnt<ilength;iCnt++)
   {
      if(Arr[iCnt]%2==0)
      {
         printf("%d\n",Arr[iCnt]);
         iEveCnt++;
      }
   }
   return iEveCnt;
}


int main()
{
   int iSize=0,iCnt=0,iRet=0;
   int *ptr=NULL;
   printf("Enter how many numbers yo want?\n");
   scanf("%d",&iSize);

   ptr=(int *)malloc(iSize*sizeof(int));

   printf("Enter elements:\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }

   iRet=DisplayEven(ptr,iSize);
   printf("Even numbers are: %d\n",iRet);
   
   free(ptr);
   return 0;
}