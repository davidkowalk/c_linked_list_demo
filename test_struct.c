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
