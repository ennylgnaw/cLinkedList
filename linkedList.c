#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_list(struct node *head) {
  printf("Linked List:\n");
  struct node *current = head;
  while (current != NULL) {
    printf("%d\n", current->i);
    current = current->next;
  }
}

struct node * insert_front(struct node *head, int data) {
  struct node *anode = malloc(sizeof(struct node));
  anode->i = data;
  anode->next = head;
  return anode;
}

struct node * free_list(struct node *anode) {
  while (anode) {
    struct node *nextNode anode->next;
    free(anode);
    anode = nextNode;
  }
  return anode;
}
