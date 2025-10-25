#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// FUNCTION TO CREATE A NODE
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// FUNCTION TO PRINT THE LINKED LIST GIVEN THE HEAD NODE
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
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("The previous node is null. Deletion not possible.\n");
        return;
    }
    struct Node *nextNode = temp->next->next;
    free(temp->next);
    temp->next = nextNode;
}

int main() {
    // INITIALIZE THE LINKED LIST
    struct Node *head = NULL;

    // ADD NODES TO THE LINKED LIST
    addNodeAtPosition(&head, 10, 0); // List: 10
    addNodeAtPosition(&head, 20, 1); // List: 10 -> 20
    addNodeAtPosition(&head, 15, 2); // List: 10 -> 20 -> 15
    addNodeAtPosition(&head, 30, 3); // List: 10 -> 20 -> 15 -> 30

    printf("Linked List after additions:\n");
    printList(head);

    // DELETE NODES FROM THE LINKED LIST
    deleteNodeAtPosition(&head, 2); // List: 10 -> 20 -> 30
    printf("Linked List after deletion at position 2:\n");
    printList(head);

    return 0;
}