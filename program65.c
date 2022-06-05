#include<stdio.h>


void DisplayNum(int Arr[])
{
   register int iCnt=0;
   printf("Elements are: \n");

   for(iCnt=0;iCnt<5;iCnt++)
   {
      printf("%d\n",Arr[iCnt]);
   }

}
int main()
{

   auto int Brr[5];
   register int iCnt=0;
   printf("Enter elements: \n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   {
      scanf("%d",&Brr[iCnt]);
   }
   DisplayNum(Brr);

   return 0;
}
