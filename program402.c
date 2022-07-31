#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct node
{
    int data;
    struct node *ichild;
    struct node *rchild;
}NODE,*PNODE,**PPNODE;


void Insert(PPNODE Head,int no)
{
    PNODE temp=*Head;
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->ichild=NULL;
    newn->rchild=NULL;

    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {

        while(1)
        {
            if(no>(temp->data))
            {
                if(temp->rchild==NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                temp=temp->rchild;
            }
            else if(no<(temp->data))
            {
                if(temp->ichild==NULL)
                {
                    temp->ichild=newn;
                    break;
                }
                temp=temp->ichild;
            }
            else if(no==(temp->data))
            {
                free(newn);
                printf("OOPS.....Data is already in BST");
                break;
            }
        }
    }
}


void Inorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->ichild);
        printf("%d\t",Head->data);
        Inorder(Head->rchild);
    }
    
}


void Preorder(PNODE Head)
{
    if(Head!=NULL)
    {
        printf("%d\t",Head->data);
        Inorder(Head->ichild);
        Inorder(Head->rchild);
    }
}


void Postorder(PNODE Head)
{
    if(Head!=NULL)
    {
        Inorder(Head->ichild);
        Inorder(Head->rchild);
        printf("%d\t",Head->data);
    }
    

}

bool Search(PNODE Head,int no)
{
    bool flag=false;
    while(Head!=NULL)
    {
        if((Head->data)==no)
        {
            flag==true;
            break;
        }
        else if(no> (Head->data))
        {
            Head=Head->rchild;
        }
        else if(no< (Head->data))
        {
           Head=Head->ichild; 
        }
    }
    return flag;
}


int LeafCount(PNODE Head)
{
    static int iCnt=0;
    if(Head!=NULL)
    {
        if((Head->ichild)==NULL &&(Head->rchild)==NULL)
        {
            iCnt++;
        }
        LeafCount(Head->rchild);
        LeafCount(Head->ichild);
    }
    return iCnt;
    
}



int main()
{
    bool flag=false;
    PNODE First=NULL;
    int iRet=0;

    Insert(&First,11);
    Insert(&First,21);
    Insert(&First,7);

    printf("\nPreorder data\n");
    Preorder(First);
    printf("\nPostorder data\n");
    Postorder(First);
    printf("\nInorder data\n");
    Inorder(First);

    flag=Search(First,7);
    if(flag==true)
    {
        printf("\nElement present is BST\n");
    }
    else
    {
        printf("\nElement not present is BST\n");
    }

    iRet=LeafCount(First);
    printf("Leaf count present is BST: %d\n",iRet);

    return 0;
}