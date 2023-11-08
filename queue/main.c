// Write a menu driven C program to implement Queue using arrays - Implement Enqueue and dequeue
#include <stdio.h>
#define max 5
int front = -1, rear = -1;
int queue[max];

void enqueue() {
  if (rear == max-1) {
    printf("Queue overflow\n");
  } else {  
    if (front == -1 && rear == -1) {
      front = 0;
    }
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    rear++;
    queue[rear] = data;
  }
}

void dequeue() {
  if (front == -1 || front == rear+1) {
    printf("Queue Underflow");
  } else {
    printf("Deleted data: %d", queue[front]);
    front++;
  }
}
void display() {
  if (front == -1 || front == rear+1) {
    printf("Queue Underflow");
  } else {
    printf("Queue data: ");
    for (int i = 0; i<max; i++) {
      if (i<front) {
        printf("Nan ");
      } else if (i>rear){
        printf("Nan ");
      } else {
        printf("%d ", queue[i]);
      }
    }
    printf("\n");
  }
}

int main() {
  int choice, on=1;

  do {
    printf("1.Enqueue()\n2.Dequeue()\n3.Display()\nChoose a operation: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        enqueue();
        break;
      case 2:
        dequeue();
        break;
      case 3:
        display();
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
  } while (on == 1);
  return 0;
}
