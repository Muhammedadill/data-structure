#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node*left,*right;
};
void main()
{
struct node* root=(struct node*)0;//null tree 
struct node* insert(struct noe*,int);
void Display(struct node*);
struct node* search(struct node*,int);
struct node* delete(struct node*,int);
int op,data;
do{
printf("1.insert\n2.display\n3.search\n4.delete\n");
printf("%d",&op);
switch(op)
{
case 1:printf("enter the data:");
scanf("%d",&data);
root=insert(data);
break;
case 2:display(root);break;
case 3:printf("enter item to search:");
scanf("%d",&data);
if(search(root,data)!=0)
printf("found\n");
else
printf("note found\n");
break;
case 4:printf("enter data to delete:");
scanf("%d",&data);
root=delete(root,data);break;
case 5:exit(0);break;
}
}while(1);
}
//display bst
void display(struct node*bst)
{
if(bst !=(struct node)0)
{
display(bst->left);
printf("%d\t",bst->data);
display(bst->right);
}
}
//insert data in bst
struct node*t,t1=bst;
t=(struct node*)malloc(SIZE of(struct node*));
