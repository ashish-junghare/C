#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch='A';
    char ch1='a';
	for(i=1,ch='A',ch1='a';i<=iRow;i++,ch++,ch1++)
	{  
		for(j=1;j<=iCol;j++)
		{
            if(i%2==0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch);
            }
		}
		printf("\n");
	}
}


int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter mumber of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter mumber of columns: \n");
    scanf("%d",&iValue2);


    Display(iValue1,iValue2);

    return 0;
}