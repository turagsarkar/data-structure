#include <stdio.h>
#include <stdlib.h> 
#define MAX 100 
int stack [MAX];
int top = -1;
int push(int value){
    if(top == MAX-1){
        printf("OVERFLOW");

    }
    else 
    {
        top++;
        stack[top]=value;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty");

    }
    else
    {
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
    }
}


int main(){ 
    push(30);
    push(50);
    push(70);
    
    display();
    return 0 ;
    
}