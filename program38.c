// reverse loop
#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
   int iCnt=0;

   for(iCnt=0;iCnt<=iNo;iCnt++)
   {
      printf("%d\t",iCnt);
   }

}
void DisplayB(int iNo)
{
   int iCnt=0;

   for(iCnt=iNo;iCnt>=0;iCnt--)
   {
      printf("%d\t",iCnt);
   }

}

int main()
{
   int iValue=0;
   bool bRet=false;

   printf("Enter any number: \n");
   scanf("%d",&iValue);

   printf("Forward factors: \n");
   DisplayF(iValue);
   printf("Reverse factors: \n");
   DisplayB(iValue);

   return 0;
}  