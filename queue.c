#include<stdio.h>
int front= -1;
int rear=-1;
void enque(int a[], int m, int n);
void deque(int a[],int n);
void traverse(int a[],int n);

int main(){
    int n,m;
    printf("Enter max: ");
    scanf("%d", &n);
    n=n-1;
    int choice, a[n];
    for(int i=0;i<=n;i++){
        a[i]=0;
    }
    printf("1. Insert\n2. Delete\n3. Traverse\n4. Exit\n");
    while(1){
        //printf("1. Insert\n2. Delete\n3. Traverse\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){

            case 1:
            printf("Enter element: ");
            scanf("%d", &m);
            enque(a,m,n);
            break;

            case 2:
            deque(a,n);
            break;

            case 3:
            traverse(a,n);
            break;

            case 4:
            return 0;
            break;

            default:
            printf("Invalid Input!");
        }
    }
}

void enque(int a[], int m, int n){
    printf("front = %d rear = %d\n",front,rear);
    if(front==rear-1 || (front==n && rear==0)){
        printf("Overflow\n");
    }
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        a[front]=m;
    }
    else if(front==n && rear != 0){
        front=0;
        a[front]=m;
    }
    else{
        front++;
        a[front]=m;
    }
    traverse(a,n);
    printf("front = %d rear = %d\n",front,rear);
    
}

void deque(int a[],int n){
    if(a[rear]==0 || (rear==-1 &&front==-1)){
        printf("Underflow!\n");
        rear--;
    }
    else if(rear==n+1){
        rear= 0;
        a[rear]=0;
        rear++;
    }
    else{
        a[rear]=0;
        rear++;
    }
    traverse(a,n);
}

void traverse(int a[],int n){
    for(int i=0;i<=n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}