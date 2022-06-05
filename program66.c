#include<stdio.h>
#include<stdlib.h>

void DisplayNum(int Arr[],int ileangth)
{
   register int iCnt=0;
   int iSize=0;

   printf("Elements are: \n");

   for(iCnt=0;iCnt<ileangth;iCnt++)
   {
      printf("%d\n",Arr[iCnt]);
   }

}
int main()
{
   register int iCnt=0;
   int *ptr=NULL; 
   int iSize=0;
   printf("Enter how many elements you want? \n");
   scanf("%d",&iSize);

   ptr=(int*)malloc(iSize*sizeof(int));

   printf("Enter elements: \n");

   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }


   DisplayNum(ptr,iSize);

   free(ptr);

   return 0;
}
