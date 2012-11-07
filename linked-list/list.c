#include <stdlib.h>
#include <stdio.h>

/**
 * Le node.
 */
struct node_s {
    int value;
    struct node_s *next;
};

typedef struct node_s node_t;

/**
 * Create a linked list.
 */
node_t *list_create(int value) {
    node_t *node;

    /* Allocate space for the node. */
    node = malloc(sizeof(node_t));

    /* Initialize node. */
    node->value = value;
    node->next = NULL;

    return node;
}

/**
 * Return length of a list.
 */
int list_length(node_t *head) {
    node_t *current = head;
    int count = 0;

    while (current != NULL) {
        count = count + 1;
        current = current->next;
    }

    return count;
}

/**
 * Push a node to the end of a linked list.
 */
int list_push(node_t *head, int value) {
    node_t *current = head;
    node_t *new;

    while (current != NULL && current->next != NULL) {
        current = current->next;
    }

    /* Create new node. */
    new = malloc(sizeof(node_t));
    new->value = value;
    new->next = NULL;

    /* Link load to last node on the linked list. */
    current->next = new;

    return 0;
}

/**
 * Return the value of the n-th element if it exists.
 * Return -1 if the n-th element doesn't exist.
 */
int list_get(node_t *head, int n) {
    int value = -1;
    int count = 0;
    node_t *current = head;

    while(current != NULL && count != n) {
        count++;
        current = current->next;
    }

    if (current != NULL) {
        value = current->value;
    }

    return value;
}


int main(int argc, char **argv) {

    printf("Linked List!\n");

    printf("argc: %d\n", argc);

    for (int i = 0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }

    node_t *a;

    a = list_create(0);
    list_push(a, 1);
    list_push(a, 2);
    list_push(a, 3);
    list_push(a, 4);

    printf("length: %d\n", list_length(a));
    printf("a@2: %d\n", list_get(a, 2));
    printf("a@10: %d\n", list_get(a, 10));

    return 0;
}
