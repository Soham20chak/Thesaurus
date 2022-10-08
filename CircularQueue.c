#include<stdio.h>
#include<stdlib.h>
#define max 5

int a[10];
int front=0,rear=-1;

void enq(){
    int n;
    if((front==0&&rear==max-1)||(rear==front-1&&front>0))
        printf("\nOverflow\n");
    else{
        printf("Enter number :");
        scanf("%d",&n);
        if(rear==max-1){
            rear=0;
            a[rear]=n;
        }
        else{
            if((front==0&&rear==-1)||(rear!=front-1)){
            rear++;
            a[rear]=n;
            }
        }
    }
}

void deq(){
    int n;
    if(front==0&&rear==-1){
        printf("\nUnderflow\n");
	}
	else{
    if(front==rear){
        printf("%d is deleted",a[front]);
        rear=-1;
        front=0;
    }
    else{
        if(front==max-1){
            n=a[front];
            front=0;
            
        }
        else{
            n=a[front];
            front++;
        }
        printf("%d is deleted\n",n);
    }
}
}

void display()
{
    int i,j;
    if(front==0&&rear==-1)
    {
        printf("\nUnderflow\n");
    }
    if(front>rear)
    {
        for(j=front;j<=max-1;j++)
            printf("%d ",a[j]);
        for(i=0;i<=rear;i++)
            printf("%d ",a[i]);
        printf("\nRear is %d and Front is %d\n",a[rear],a[front]);
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nRear is %d and Front is %d\n",a[rear],a[front]);
    }
    printf("\n");
}


void main()
{
    int ch;
    printf("1.Insert 2.Delete 3.Display 4.Exit\n");
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: enq();
            break;
        case 2: deq();
            break;
        case 3:display();
            break;
        case 4:exit(0);
        default:printf("Invalid option\n");
        }
    }
}
