#include<stdio.h>


void DisplayNum(int *ptr)
{
   register int iCnt=0;
   printf("Elements are: \n");

   for(iCnt=0;iCnt<5;iCnt++)
   {
      printf("%d\n",*ptr);
      ptr++;
   }

}
int main()
{

   auto int Arr[5];
   register int iCnt=0;
   printf("Enter elements: \n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   {
      scanf("%d",&Arr[iCnt]);
   }
   DisplayNum(Arr);

   return 0;
}
