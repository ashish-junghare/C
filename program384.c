#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

int Summation(PNODE Head)
{
    int iSum=0;
    while(Head != NULL)
    {
        iSum=iSum+(Head->data);
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE Head)
{
    int iMax=Head->data;
    if(Head == NULL)
    {
        return -1;
    }
    while(Head != NULL)
    {
        if(iMax<(Head->data))
        {
            iMax=Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int Frequency(PNODE Head,int iNo)
{
    int iCnt=0;
    int iMax=Head->data;
    while(Head != NULL)
    {
        
        if(iNo==(Head->data))
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

void SumFactor(PNODE Head)
{
    int i=0,iSum=0,iNo=0;
    while(Head != NULL)
    {
        iNo=Head->data;
        for(i=1,iSum=0;i<=iNo/2;i++)
        {
            if((iNo%i)==0)
            {
                iSum=iSum+i;
            }
        }
        if(iNo==iSum)
        {
            printf("Perfect number in LL is: %d\n",iNo);
        }
        Head = Head->next;
        
    }
}

void AddDigit(PNODE Head)
{
    int i=0,iDigit=0,iNo=0,iSum=0;
    while(Head != NULL)
    {
        iSum=0;
        iNo=Head->data;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("Addition is: %d\n",iSum);
        Head = Head->next;
        
    }
}

int SearchFirstOccurance(PNODE Head,int iNo)
{
    int i=0,iPos=1,iValue=0,iSum=0;
    while(Head != NULL)
    {
        iValue=Head->data;
        if(iNo==iValue)
        {
            break;
        }
        Head = Head->next;
        iPos++;
        
    }
    if(Head==NULL)
    {
        iPos=-1;
    }
    return iPos;
}

int SearchLastOccurance(PNODE Head,int iNo)
{
    int i=0,iPos=1,iValue=0,iSum=0,iFinal=-1;
    while(Head != NULL)
    {
        iValue=Head->data;
        if(iNo==iValue)
        {
            iFinal=iPos;
        }
        Head = Head->next;
        iPos++;
        
    }
    return iFinal;
}

int MidElement(PNODE Head)
{
    int i=0,iCnt=0,iValue=0,iSum=0,iPos=1;
    PNODE temp=Head;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    if(iCnt%2==0)
    {
        iCnt=iCnt/2;
    }
    else
    {
        iCnt=(iCnt+1)/2;
    }

    while(iPos != iCnt)
    {
        temp = temp->next;
        iPos++;
        
    }
    return temp->data;
}

int OptMidElement(PNODE Head)
{
    PNODE Fast=Head;
    PNODE Slow=Head;

    while(Fast!=NULL && Fast->next!=NULL)
    {
        Fast=Fast->next->next;
        Slow=Slow->next;
    }
    return Slow->data;
}

void Reverse(PPNODE Head)
{
    PNODE Previous=NULL;
    PNODE Current=*Head;
    PNODE Next=NULL;

    while(Current!=NULL)
    {
        Next=Current->next;
        Current->next=Previous;
        Previous=Current;
        Current=Next;
    }
    *Head=Previous;

}

bool CheckLoop(PNODE Head)
{
    PNODE fast=Head;
    PNODE slow=Head;
    bool Flag=false;

    while((fast!=NULL)&&(fast->next!=NULL))
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            Flag=true;
            break;
        }

    }
    return Flag;
}

int main()
{
    int iRet=0,iNo=0;
    PNODE First = NULL;
    PNODE third=NULL;
    PNODE last=NULL;
    bool bRet=false;
    //printf("Enter number to get frequency: ");
    //scanf("%d",&iNo);

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    third=First;
    last=First;

    third=third->next->next;

    last=last->next->next->next->next;

    last->next=third;

    bRet=CheckLoop(First);
    if(bRet==true)
    {
        printf("There is loop in LL \n");
    }
    else
    {
        printf("There is no loop in LL \n");
    }


    return 0;
}


