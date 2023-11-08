#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct node {
  int info;
  struct node *next;
};

// Declare the global start pointer and two additional pointers
struct node *start, *a, *b;

// Function to insert a node after a given value
void insert_after(int value) {
  int data;
  printf("Enter the data: ");
  scanf("%d", &data);

  // Create a new node
  struct node *temp = malloc(sizeof(struct node));
  temp->info = data;
  temp->next = NULL;

  if (start == NULL) {
    printf("Empty Linked list\n");
  } else {
    a = start;
    while (a->next != NULL && a->info != value) {
      a = a->next;
    }
    if (a->info == value) {
      temp->next = a->next;
      a->next = temp;
    } else {
      printf("Node not found\n");
    }
  }
}

// Function to search for a node with a given value
void search_node(int value) {
  if (start == NULL) {
    printf("Empty Linked list\n");
  } else {
    a = start;
    int n = 0;
    while (a->next != NULL && a->info != value) {
      n++;
      a = a->next;
    }
    if (a->info == value) {
      printf("Node present at position: %d\n", n);
    } else {
      printf("Node not found\n");
    }
  }
}

void display_last_node() {
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

// Function to insert a node at the end of the linked list
void insert_at_end() {
  int data;
  printf("Enter the data: ");
  scanf("%d", &data);

  // Create a new node
  struct node *temp = malloc(sizeof(struct node));
  temp->info = data;
  temp->next = NULL;

  if (start == NULL) {
    start = temp;
  } else {
    a = start;
    while (a->next != NULL) {
      a = a->next;
    }
    a->next = temp;
  }
}

// Function to insert a node at the start of the linked list
void insert_at_start() {
  int data;
  printf("Enter the data: ");
  scanf("%d", &data);

  // Create a new node
  struct node *temp = malloc(sizeof(struct node));
  temp->info = data;
  temp->next = NULL;

  if (start == NULL) {
    start = temp;
  } else {
    temp->next = start;
    start = temp;
  }
}

// Function to delete a node from the end of the linked list
void delete_at_end() {
  if (start == NULL) {
    printf("Linked list is empty\n");
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

// Function to delete a node from the start of the linked list
void delete_at_start() {
  if (start == NULL) {
    printf("Linked list is empty\n");
  } else {
    a = start;
    printf("Deleted Data: %d\n", a->info);
    start = a->next;
    free(a);
  }
}

// Function to display the linked list
void display() {
  if (start == NULL) {
    printf("Linked list is empty\n");
  } else {
    a = start;
    while (a->next != NULL) {
      printf("%d ", a->info);
      a = a->next;
    }
    printf("%d ", a->info);
  }
}

int main() {
  int choice, on = 1;
  do {
    printf("1. Insert at the end / Push(stack) / Enqueue(queue)\n2. Delete from the end / Pop(stack)\n3. Display last node\n4. Display\n5. Insert after a value\n6. Search for a node\n7. Delete at Start / Dequeue(queue)\nChoose an operation: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        insert_at_end();
        break;

      case 2:
        delete_at_end();
        break;

      case 3:
        display_last_node();
        break;

      case 4:
        display();
        break;

      case 5:
        printf("Insert after: ");
        int v;
        scanf("%d", &v);
        insert_after(v);
        break;

      case 6:
        printf("Search for a node: ");
        int w;
        scanf("%d", &w);
        search_node(w);
        break;

      case 7:
        delete_at_start();
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
