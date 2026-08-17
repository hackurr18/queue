#include<stdio.h>

int reverse(int num){
    int new=0;
    if(num<9){
        new=num;
    }
    else{
      new=num%10;
      num=num/10;
      
    }
    printf("%d",num);
    return reverse(num);
}
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
     reverse(num);
     return 0;
}