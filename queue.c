#include<stdio.h>
#include<stdlib.h>
#define size 20
int front=-1,rear=-1;
int queue[size];
int Enqueue();
int Dequeue();
void display();
int main()
{
	int x,ch,a,i,value;	
	do
	{
	printf("enter 1 for enqueue operation\n");
	printf("enter 2 for dequeue operation\n");
	printf("enter 3 to display the queue elements");
	printf("enter 4 for exit operation\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			Enqueue();
			break;
		case 2:	
			value=Dequeue();
			printf("THE DELETED ELEMENT IS %d\n",value);
			break;
		case 3:
			display();
			break;
	
		case 4:
			exit(0);
			break;
	}
	}while(ch!=4);
}
int Enqueue()
{
	int a;
	printf("enter a element");
	scanf("%d",&a);
		if((front==0&&rear==size-1)||(rear==front-1))
		{
			printf("\nqueue is full");
			return;
		}
		rear++;
		queue[rear]=a;
		printf("element is added");
		if(front==-1)
		{
			front++;
		}
		
}
int Dequeue()
{
	int x,i;
	if(rear==-1)
	{
		printf("\nqueue is empty");
		return;
	}
	if(front==rear)
	{
		x=queue[front];
		front=-1;
		rear=-1;
	}
	else
	{
		x=queue[front];
		front++;
		front=front%size;
	}
	return x;
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("queue is empty");
	}
	if(front<rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("%4d",queue[i]);
		}
	}
	else
	{
		for(i=front;i<=size-1;i++)
		{
			printf("%4d",queue[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf("%4d",queue[i]);
		}
	}
}
