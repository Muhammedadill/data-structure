#include<stdlib.h>
#include<stdio.h>
#define size 10
int stack[size];
int sp=-1;
void main()
{
int opt,data;
void push(int);
int pop();
void display();
do
{
printf("\n1.push\n");
printf("2.pop\n");
printf("3.display\n");
printf("4.exit\n");
printf("your option:");
scanf("%d",&opt);
	switch(opt)
	{
	case 1:printf(" \n Enter data:");
	scanf("%d",&data);
	push(data);
	break;
	case 2:data=pop();
	printf("\n popped item is %d \n",data);
	break;
	case 3:display();break;
	case 4:exit(0);
	}
 }while(1);
}
void push(int data)
{
if(sp==size-1)
printf("full stack \n");
else
stack[++sp]=data;
}
int pop()
{
if(sp==-1)
{
printf("empty stack \n");
exit(1);
}
else
return stack[sp--];
}

void display()
{
int tsp=sp;
printf("\n stack contents :\n");
while(tsp!=-1)
{
printf(" %d ",stack[tsp]);
tsp--;
}
printf("\n");
}
