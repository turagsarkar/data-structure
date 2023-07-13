#include <stdio.h>
#include <stdlib.h>
#define MAX  100  
int stack [MAX];
int top = -1;
void push(int value){
    if(top == MAX-1){
        printf("OVERFLOW");

    }
    else 
    {
        top++;
        stack[top]=value;
    }
}
void pop(){
   
    if(top == MAX-1){
        printf("UNDERFLOW");

    }
    else 
    {
        top--;
    }
}
void topValue(){
    if(top==-1){
        printf("Stack is empty");
    }
    else 
    {
        
        printf("The upper %d\n",stack[top]);
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
    push(40);
    push(50);
    pop();
    topValue();
    display();
    
}

