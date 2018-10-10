#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main() {
  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));
  struct node *three = malloc(sizeof(struct node));

  one->i = 1;
  one->next = two;
  two->i = 2;
  two->next = three;
  three->i = 3;
  three->next = NULL;

  printf("Testing print_list function:\n");
  print_list(one);

  struct node *new = insert_front(one, 0);
  printf("Testing insert_front function:\n");
  print_list(new);

  printf("Testing free_list function:\n");
  print_list(free_list(new));

  return 0;
}
