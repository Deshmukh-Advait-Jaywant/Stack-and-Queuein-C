#include<stdio.h>
#include<stdlib.h>
#define SIZE 65
void push(int[],int *);
int pop(int[],int *);
int Top(int[],int *);
int IsEmpty(int[],int *);
int IsFull(int [],int *);
int Count(int *);
int size();
int display();
int main()
{
	int stack[SIZE],top=0,x,ch,a,i;
	do
	{
	printf("\nMenu of Stack");
	printf("\n1.Push");
	printf("\n2.Pop");
	printf("\n3.Top");
	printf("\n4.IsEmpty");
	printf("\n5.IsFull");
	printf("\n6.Count");
	printf("\n7.size");
	printf("\n Enter 8 to exit:");
	scanf("%d",&ch);
	int deleted;
	switch(ch)
	{
		case 1:
			if(IsFull(stack,&top))
			{
				printf("Stack is full");
				return;
			}
			push(stack,&top);
			break;
		case 2:
			if(IsEmpty(stack,&top))
			{
				printf("\nStack is empty");
				break;
			}
			deleted=pop(stack,&top);
			printf("\nYour integer %d is deleted in the stack",deleted);
	        break;
	    case 3:
	    	if(top!=0)
	    	{
	    	Top(stack,&top);
	        }
	        break;
	    case 4:
	    	x=IsEmpty(stack,&top);
	    	if(x==1)
	    	{
	    		printf("It is empty");
			}
			else
			{
				printf("Not Empty");
			}
			break;
		case 5:
			x=IsFull(stack,&top);
	    	if(x==1)
	    	{
	    		printf("It is Full");
			}
			else
			{
				printf("Not Full");
			}
			break;
	    case 6:
	    	Count(&top);
	    	printf("%d",top);
	    	break;
	    case 7:
	    	size();
	    	printf("%d",SIZE);
	    	break;	
	    case 8:
	    	display(&top,stack);
	    	break;
	}
	
}while(ch!=9);
}
void push(int stack[],int *top)
{
			int x[100],n,i;
			printf("\nEnter  integer  to add:");
			scanf("%d",&n);
		//	printf("%d",*top
			*top=*top+1;
		    stack[*top]=n;
		    printf("\nThe added integer is\n %d\t",stack[*top]);	

		    //printf("\nYour integer is added to the stack\n");   
}
int pop(int stack[],int *top)
	{
		int poped;
         poped=stack[*top];
         *top=*top-1;
         return poped;
         
	}
int Top(int stack[], int *top)
{
   		printf("The Stack of top is %d",stack[*top]);
	
}
int IsFull(int stack[],int *top)
{
	if(*top==SIZE)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int IsEmpty(int stack[],int *top)
{
	if(*top==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Count(int *top)
{
	return *top;
}
int size()
{
	return SIZE;
}
int display(int *top,int stack[])
{
	int i,fact=1;
	for(i=*top;i>0;--i)
	{
		printf("%d\n",stack[i]);
		
	}
	for(i=*top;i>0;--i)
	{
	fact=fact*stack[i];
	}
	printf("\nfactorial : %d\n",fact);
}
