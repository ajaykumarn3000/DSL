//3. Write a menu driven C Program to implement stack using linked list - implement Peek, Push and POP operation

#include <stdio.h>
#include <malloc.h>

struct node{
  int info;
  struct node *next;
}*start, *a, *b;

void push() {
  int data;
  printf("Enter the data: ");
  scanf("%d", &data);

  struct node *temp = malloc(sizeof(struct node));
  temp->info = data;
  temp->next = NULL;

  if (start == NULL) {
    start = temp;
  }
  else {
    a = start;
    while (a->next != NULL) {
      a = a->next;
    }
    a->next = temp;
  }
}

void pop() {
  if (start == NULL) {
    printf("Stack Underflow\n");
  } else {
    a = start;
    while (a->next != NULL) {
      b = a;
      a = a->next;
    }
    printf("Deleted Data: %d\n", a->info);
    b->next = NULL;
    free(a);
  }
}

void peek() {
  if (start == NULL) {
    printf("Stack Underflow\n");
  } else {
    a = start;
    while (a->next != NULL) {
      a = a->next;
    }
    printf("Top Data: %d\n", a->info);
  }
}

void display() {
  if (start == NULL) {
    printf("Stack Underflow\n");
  } else {
    a = start;
    while (a->next != NULL) {
      printf("%d ", a->info);
      a = a->next;
    }
    printf("%d ", a->info);
  }
}

int main () {
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