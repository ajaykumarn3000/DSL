//4. Write a menu driven C program to implement Queue using linked list - Implement Enqueue and dequeue
//5. Write a menu driven C program to implement linked list and perform following operations- Creation of linked list, adding node at the begining, deletion from the front
//6. Write a menu driven C program to implement linked list and perform following operations- Creation of linked list,adding in between(after a given node or after given position), deletion at the end
//7. Write a menu driven C program to implement linked list and perform following operations- Creation of linked list, reversing a linked list, searching a node in the list

#include <stdio.h>
#include <malloc.h>

struct node{
  int info;
  struct node *next;
}*start, *a, *b;

void enqueue() {
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

void dequeue() {
  if (start == NULL) {
    printf("Queue Underflow\n");
  } else {
    a = start;
    printf("Deleted Data: %d\n", a->info);
    start = a->next;
    free(a);
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
    printf("1.enqueue()\n2.dequeue()\n3.Display()\nChoose a operation: ");
    scanf("%d", &choice);
    switch (choice)
    {
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
      printf("Invalid Choice.\n");
      break;
    }
    printf("Enter 1 to continue: ");
    scanf("%d", &on);
  } while (on == 1);
  return 0;
}