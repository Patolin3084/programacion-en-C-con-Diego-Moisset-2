#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *next;
    struct node *former;
};

struct node *root=NULL;

void release()
{
    if(root!=NULL)
    {
        struct node *reco=root->next;
        struct node *del;
        while(reco!=NULL)
        {
            del=reco;
            reco=reco->next;
            free(del);
        }
        free(root);
    }
}

int empty()
{
    if(root==NULL)
        return -1;
    else
        return 0;
}

int amount()
{
    int amount=0;
    if(!empty())
    {
        struct node *reco=root;
        do{
           amount++;
           reco=reco->next;
        }while(reco!=root);
    }
    return amount;
}

void deleteNode(int pos)
{
    if(pos<=amount())
    {
        if(pos==1)
        {
            if(amount()==1)
            {
                free(root);
                root=NULL;
            }
            else
            {
                struct node *del=root;
                struct node *last=root->former;
                root=root->next;
                last->next=root;
                root->former=last;
                free(del);
            }
        }
        else
        {
            struct node *reco=root;
            for(int r=1;r<=pos-1;r++)
            {
                reco=reco->next;
            }
            struct node *del=reco;
            struct node *anterior=reco->former;
            reco=reco->next;
            anterior->next=reco;
            reco->former=anterior;
            free(del);
        }
    }
}


void insertFirst(int x)
{
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    if(empty())
    {
        nuevo->next=nuevo;
        nuevo->former=nuevo;
        root=nuevo;
    }
    else
    {
        struct node *last=root->former;
        nuevo->next=root;
        nuevo->former=last;
        last->next=nuevo;
        root->former=nuevo;
        root=nuevo;
    }
}

void insertLast(int x)
{
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    if(empty())
    {
        nuevo->next=nuevo;
        nuevo->former=nuevo;
        root=nuevo;
    }
    else
    {
        struct node *last=root->former;
        nuevo->next=root;
        nuevo->former=last;
        last->next=nuevo;
        root->former=nuevo;
    }
}

void print()
{
    if(!empty())
    {
        printf("Full list\n");
        struct node *reco=root;
        do{
           printf("%i ",reco->info);
           reco=reco->next;
        }while(reco!=root);
        printf("\n");
    }
}

int main()
{
    insertFirst(1);
    insertFirst(2);
    insertFirst(3);
    print();
    insertLast(4);
    print();
    deleteNode(3);
    print();
    release();
    getch();
    return 0;
}
