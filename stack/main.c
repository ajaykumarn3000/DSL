// Write a menu driven C Program to implement stack using arrays - implement Peek, Push and POP operation
#include <stdio.h>
#define max 5
int top = -1;
int stack[max];

void push() {
  if (top == max-1) {
    printf("Stack Overflow\n");
  } else {
    int data;
    printf("Enter the value: ");
    scanf("%d", &data);
    top++;
    stack[top] = data;
  }
}

void pop() {
  if (top == -1) {
    printf("Stack Underflow\n");
  } else {
    printf("Deleted data: %d\n", stack[top]);
    top--;
  }
}

void peek() {
  if (top == -1) {
    printf("Stack Underflow\n");
  } else {
    printf("Data at top: %d\n", stack[top]);
  }
}

void display() {
  if (top == -1) {
    printf("Stack Underflow\n");
  } else {
    printf("Stack data: ");
    for (int i = 0; i<=top; i++) {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int main() {
  int choice,on=1;
  do {
    printf("1.Push()\n2.Pop()\n3.Peek()\n4.Display()\nChoose a operation: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      push();
      break;
    
    case 2:
      pop();
      break;

    case 3:
      peek();
      break;
    
    case 4:
      display();
      break;
    
    default:
      printf("Invalid Choice.\n");
      break;
    }
    printf("Enter 1 to continue: ");
    scanf("%d", &on);
  } while (on == 1);
  return 0;
}