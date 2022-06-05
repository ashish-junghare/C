/*
Input:  Row=4	column=4
Output : 	A	
			B	B	
			C	C	C	
			D	D	D	D
*/


#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	for(j=1,ch='A';j<=iCol;j++,ch++)
	{
		for(i=1;i<=iRow;i++)
		{
			if(i<=j)
			{
				printf("%c\t",ch);
			}
			
		}
		printf("\n");
	}

}


int main()
{
	int iValue1=0;
	int iValue2=0;

	printf("Enter rows: \n");
	scanf("%d",&iValue1);

	printf("Enter columns: \n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);


	return 0;
}