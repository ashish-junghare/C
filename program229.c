#include<stdio.h>

void DsiplayI()
{
   auto int iCnt=0;
   while(iCnt<=3)
   {

      printf("*\t");

      iCnt++;
   }

}
void DisplayR()
{
   static int iCnt=0;
   if(iCnt<=3)
   {

      printf("*\t");

      iCnt++;

      DisplayR();
   }


}



int main()
{
   
   //DsiplayI();
   DisplayR();
   return 0;
}