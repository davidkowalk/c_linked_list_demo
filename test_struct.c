# include <stdio.h>
# include <string.h>
# include <stdlib.h>

# define null NULL

//Structures
struct node {
  int n;
  struct node *child;
};

struct str_node {
  char *txt;
  struct node *child;
};

//Print tree
void print_node_tree(struct node *node) {
    printf("%d", node->n);
    if (node->child != null) {
      printf(" -> ");
      print_node_tree(node->child);
    }
}

//Free allocated memory
void free_tree(struct node *node) {
  if (node -> child != null) {
    free_tree(node -> child);
  }

  free(node);
  return;
}

//User Input
void get_val(int *input) {
  printf("node: ");
  scanf("%d", input);
}


void main() {

  //build head
  struct node *head = malloc(sizeof(struct node));
  struct node *last_element;
  int input;

  get_val(&input);
  printf("head constructed.\n");

  head -> n = input;
  last_element = head;

  //Add Children
  while(input != -1) {
    struct node *child = malloc(sizeof(struct node));
    //printf("%p\n", child);

    get_val(&input);

    child -> n = input;
    last_element -> child = child;
    last_element = child;
  }

  last_element -> child = null;

  print_node_tree(head);
  printf("\n");
  free_tree(head);

}
