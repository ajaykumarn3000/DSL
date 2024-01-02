#include <stdio.h>
#include <malloc.h>

struct node {
  int info;
  struct node *left;
  struct node *right;
} *root;