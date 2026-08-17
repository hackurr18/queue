#include<stdio.h>
#define SIZE 5
int front=0;
int rear=3;

 void insertleft(int cir[],int item){
    if(front==0 && rear==SIZE-1 || front==rear+1){
        printf("overflow");
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else {
        if(front==0){
        front=SIZE -1;
    }
        else{
            front=front-1;
         
        }
    }
    cir[front]=item;
    printf("%d is inserted",item);
 }

 void deleteleft(int cir[],int item){
    if(front==-1){
        printf("underflow");
        return;
    }
    item=cir[rear];
    if(front== rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==SIZE-1){
            front=0;
        }
        else{
            front++;
        }
    }
 }
int main(){
    int item;
   // printf("enter the item");
  //  scanf("%d",&item);
    int cir[5]={2,4,5,6};
 //   insertleft(cir,item);
    deleteleft(cir,item);
    printf("\n");
    printf("main");
    printf("\n");
    printf("%d",cir[front]);
    printf("\n");
    printf("%d",cir[2]);
    printf("\n");
    printf("%d %d",front ,rear);
    return 0;
}