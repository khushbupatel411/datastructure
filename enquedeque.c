#include <stdio.h>
int queue[5];
		
void display(int queue[],int f,int r)
{	
	printf("\nQueue is ");
	for(int i=f;i<=r;i++)
	{
		printf("%d, ",queue[i]);

	}
}
int insert(int queue[],int front,int rear, int num)
{	
	queue[rear]=num;			
}
void dequeue(int queue[],int f,int r)
{	

	printf("\nAfter dequeueing");
	for(int i=f;i<=r;i++)
	{
		if(f==r)
		{
			printf("Queue underflow");
		}
		else
		{	//queue[i]=0;
			/*for(int j=f;j<=r;j++)
			{
				printf("%d, ",queue[j]);
			}*/
			display(queue,f,r);
			break;
		}
	}
}
void main()
{
	int rear = -1;
	int front = 0;
	int i,num,f,r;
	printf("Enter elements: ");
	while(1)
	{
		rear=rear+1;
		if(rear>=5)
		{
			printf("Queue Overflow\n ");
			break;
		}
		else
		{
			scanf("%d",&num);
			insert(queue,front,rear,num);
		}
		f=front;
		r=rear;
	}
	display(queue,f,r);
	dequeue(queue,f,r);
	
		
	
}

