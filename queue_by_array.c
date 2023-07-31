#include <stdio.h>
#define SIZE 10

void enQueue(int);
void deQueue();
void display();
void copyQueue();

int items[SIZE], front = -1, rear = -1;
void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("overflow");
  else {
    if (front == -1)
    front = 0;
    rear++;
    items[rear] = value;
    printf("%d\n", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("empty");
  else {
    printf("%d\n", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

void copyQueue(){
int items2[SIZE];
   for(int i = 0; i < SIZE; i++) {
        items2[i] = items[i];
   }
    for(int i = 0; i <SIZE; i++) {
        printf("%d\n",items2[i]);
    }
}

void display() {
  if (rear == -1)
    printf("empty\n");
  else {
    int i;
    for (i = front; i <= rear; i++)
      printf("%d  ",items[i]);
  }
  printf("\n");
}

int main() {
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);
  enQueue(7);
  display();
  deQueue();
  display();
  copyQueue();
  display();
}