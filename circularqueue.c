#include<stdio.h>
#define SIZE 5
int cir[SIZE];
int rear=-1;
int front=-1;

void insert(int value){
    if( (front==0 && rear==SIZE -1) || front==rear+1){
        printf("queue is overflow");
        printf("\n");
    
    }
    if(front==-1){
        front=rear=0;
        cir[0]=value;
    }
    else{
       
        rear=(rear +1)% SIZE;   // very important (rear ko  1 se iniatilize )
    }
        
    
        cir[rear]=value;
    
}

/*void display(){
    if(front==-1 && rear==-1){
        printf("queue is empty");
    }
    else{
        printf("circular queue is: ");
        for(int i=front;i<SIZE ;i++){
            printf("%d ",cir[i]);
        }
    }
}. */
void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", cir[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

void delete(){
    if(front==-1 && rear==-1){
        printf("queue is empty cannot delete\n");
        return;
    }
    else if(front==rear){
        front=rear=-1 ;
    }
    else{
        front=(front+1)% SIZE;
    }
}
int main(){
    insert(12);
    insert(24);
    insert(78);
    insert(4);
   insert(28);
    display();
    delete();
    delete();
    delete();
     delete();
   delete();
    delete();
  //  insert(69);
    display();
 //   insert(67);
  //  display();
    return 0;
}