/*
Input:  Row=4	column=4
Output : 	#	#	#	*	
			#	#	*	#	
			#	*	#	#	
			*	#	#	#	
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("Enter valid numbers as rows==columns");
		return;
	}
	for(i=1;i<=iCol;i++)
	{
		for(j=1;j<=iRow;j++)
		{
			if(i+j==(iRow+1))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
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