#include<stdio.h>
#define SIZE 5
int front=0;
int rear=4;
// cir[5]={2,4,5,6,7}
//front=0 , rear=3
 void insertright(int cir[],int item){
    if(front==0 && rear==SIZE-1 || front==rear+1){
        printf("overflow");
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else {
        if(rear==SIZE-1){
        rear=0;
    }
        else{
            rear=rear+1;
         cir[rear]=item;
        }
    }
    printf("%d is inserted",item);
 }

  void deleteright(int cir[],int item){
    if(front == -1){
        printf("queue underflow");
    } 
    item=cir[rear] ;
    if(front == rear){
        rear=-1;
        front=-1;
    }
    else{
        if(rear== 0)
        rear=SIZE -1;
        else
           rear--;
    }
    
 }

/*void display(int cir[]){
    for(int i=front;i<=rear;i++){
        printf("%d ",cir[i]);
    }
 } */
int main(){
    int item;
   // printf("enter the item");
  //  scanf("%d",&item);
    int cir[5]={2,4,5,6,7};
 //   insertright(cir,item);
 deleteright(cir,item);
    printf("\n");
    printf("main");
    printf("\n");
    printf("%d",cir[rear]);
    printf("\n");
    printf("%d",cir[2]);
    printf("\n");
  //  printf("%d %d",front ,rear);
    display(cir);
    deleteright(cir,item);
    printf("\n");
    display(cir);
     deleteright(cir,item);
    printf("\n");
    display(cir);
     deleteright(cir,item);
    printf("\n");
    display(cir);
     deleteright(cir,item);
    printf("\n");
    display(cir);
    printf("hi");
     deleteright(cir,item);
    printf("\n");
    display(cir);
  return 0;
}