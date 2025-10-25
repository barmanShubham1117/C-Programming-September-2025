#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *previous;
};

// FUNCTION TO CREATE A NODE
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->previous = NULL;
    return newNode;
}

// FUNCTION TO PRINT THE DOUBLY LINKED LIST GIVEN THE HEAD NODE
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// FUNCTION TO ADD A NODE AT THE GIVEN POSITION
void addNodeAtPosition(struct Node **head, int data, int position) {
    struct Node *newNode = createNode(data);
    // If inserting at the head (position 0)
    if (position == 0) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->previous = newNode;
        }
        *head = newNode;
        return;
    }
    
    // Traverse to the node before the desired position
    struct Node *temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("The previous node is null. Insertion not possible.\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    newNode->previous = temp;
    if (temp->next != NULL) {
        temp->next->previous = newNode;
    }
    temp->next = newNode;
}

// FUNCTION TO DELETE A NODE AT THE GIVEN POSITION
void deleteNodeAtPosition(struct Node **head, int position) {
    if (*head == NULL) {
        printf("The list is empty. Deletion not possible.\n");
        return;
    }
    struct Node *temp = *head;
    if (position == 0) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->previous = NULL;
        }
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("The node to be deleted does not exist. Deletion not possible.\n");
        return;
    }
    if (temp->next != NULL) {
        temp->next->previous = temp->previous;
    }
    if (temp->previous != NULL) {
        temp->previous->next = temp->next;
    }
    free(temp);
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;

    // Adding nodes at various positions
    addNodeAtPosition(&head, 10, 0);
    addNodeAtPosition(&head, 20, 1);
    addNodeAtPosition(&head, 30, 1);

    // Printing the final list
    printList(head);

    // Deleting a node at position 1
    deleteNodeAtPosition(&head, 1);
    printf("After deletion:\n");
    printList(head);

    return 0;
}
