#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int info;
    struct node * link;
};
struct node * getnode();
void addfirst(struct node **,int);
void addafter(struct node **,int,int);
void insert_in_sortedlist(struct node **,int);
void delnode(struct node **,int);
void traverse(struct node *);
void freeall(struct node **);
int main()
{
    struct node *p;
    int item,pos,cnt,ch;
    p=getnode();
    p->link=NULL;
    do
    {
        printf("1.ADDfirst\n2.ADDafter\n3.INSERTinSORTEDlist\n4.DELETE\n5.TRAVERSE\n6.EXIT\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter a number");
            scanf("%d",&item);
            addfirst(&p,item);
            break;
            case 2:
            printf("enter a number");
            scanf("%d%d",&item,&pos);
            addafter(&p,item,pos);
            break;
            case 3:
            printf("enter a number");
            scanf("%d",&item);
            insert_in_sortedlist(&p,item);
            break;
            case 4:
            printf("enter a number");
            scanf("%d",&item);
            delnode(&p,item);
            break;
            case 5:
            traverse(p);
            break;
            case 6:
            freeall(&p);
            break;
            default:
            printf("Invalid choice");
            
        }
    }while(ch!=6);
    return 0;
}
struct node * getnode()
{
    struct node * t;
    t=(struct node*)malloc(sizeof(struct node));
    return (t);
}
void addfirst(struct node** start,int item)
{
    struct node *new;
    new=getnode();
    if(new==NULL)
    {
        printf("overflow");
        return;
    }
    new->info=item;
    if((*start)->link==NULL)
    {
        (*start)->link=new;
        new->link=*start;
    }
    else
    {
        new->link=(*start)->link;
        (*start)->link=new;
    }
}
void addafter(struct node** start,int item,int pos)
{
    struct node *new,*ptr;
    int i;
    for(ptr=(*start)->link,i=1;i<pos;i++,ptr=ptr->link)
    {
        if(ptr==*start)
        {
            printf("such a node does not exist");
            return;
        }
    }
    new=getnode();
    if(new==NULL)
    {
        printf("overflow");
        return;
    }
    new->info=item;
    new->link=ptr->link;
    ptr->link=new;
}
void insert_in_sortedlist(struct node** start,int item)
{
    struct node *new,*ptr,*loc;
    new=getnode();
    if(new==NULL)
    {
        printf("overflow");
        return;
    }
    new->info=item;
    if(loc==NULL)
    {
        new->link=(*start)->link;
        (*start)->link=new;
    }
    else
    {
        new->link=loc->link;
        loc->link=new;
    }
}
void search(struct node* start,int item,struct node** loc,struct node** locp)
{
    *locp=NULL;
    *loc=start->link;
    while(*loc!=start&&(*loc)->info!=item)
    {
        *locp=*loc;
        *loc=(*loc)->link;
    }
}



void delnode(struct node** start,int item)
{
    struct node *loc,*locp;
    search(*start,item,&loc,&locp);
    if(loc==NULL)
    {
        printf("item not in the list");
    }
    else if(locp==NULL)
    {
        (*start)->link=(*start)->link->link;
    }
    else
    {
       locp->link=loc->link;
       free(loc);
    }
}
void traverse(struct node *start)
{
    struct node *ptr;
    ptr=start->link;
    while(ptr!=start)
    {
        printf("%d\t",ptr->info);
        ptr=ptr->link;
    }
    printf("\n");
}
void freeall(struct node **start)
{
    struct node *ptr;
    while((*start)->link!=NULL)
    {
        ptr=(*start)->link;
        *start=(*start)->link;
        free(ptr);
    }
}
