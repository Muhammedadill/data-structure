#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=0,rear=0;
void main()
{
void enq(int);
void deque();
int search(int);
int op,data;
do
{
//printf("\n circular queue operation\n");
printf("\n 1.insert \n 2.delete \n 3.search \n 4.exit");
printf("\n your choice:");
scanf("%d",&op);
switch(op)
{
case 1:printf("\n enter the data: ");
	scanf("%d",&data);
	enq(data);
break;
	
case 2:deque();
break;
	
case 3:

 if(front == rear)
 {
 printf("\n queue is empty\n");
 }
 else
 {
 printf("\n enter item to search:");
	scanf("%d",&data);
	if(search(data)) 
	    printf("\n the item is present \n");
	else
	    printf("\n the item not found \n");
	    }
	break;
case 4:exit(0);
}
}
while(1);
}
void enq (int data)
{
int trear=rear;
trear=(rear+1) % SIZE;
if(trear==front)
{
printf("\n queue is full \n");
}
else
{
rear=trear;
que[rear]=data;
}
}
void deque()
{
if(rear==front)
{
printf("\n queue is empty \n");
exit(0);
}
else
{
front=(front+1)%SIZE;
printf("\n [%d] is deleted from queue \n", que[front]);
}
}
int search(int data)
{
int tfront;
tfront=(front+1)%SIZE;
while(tfront != rear && que[tfront]!=data)
tfront=(tfront+1)%SIZE;
if(que[tfront]==data)
return 1;
return 0;
}


