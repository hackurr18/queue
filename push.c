#include<stdio.h>
#define MAX 5
int top=-1;
int stack[MAX];

void push(int value){
    if(top== MAX -1){
        printf("stack is full");
        printf("\n");
    }
    else{
        top++;
        stack[top]=value;
    }
}
void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("stack is: ");
        for(int i=0;i<=top ;i++){
            
            printf("%d ",stack[i]);
        }
        printf("\n");
        printf("top is %d ",stack[top]);
    }
}
void pop(){
    if(top== -1){
        printf(" cannot delete");
   }
    else{
        int del=stack[top];
        top--;
    }
}


int main(){
    push(10);
    push(14);
    push(15);
    push(26);
    push(36);

    peek();
    pop();
    peek();
    return 0;
}

