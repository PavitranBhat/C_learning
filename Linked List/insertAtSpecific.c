#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtPosition(struct Node* head, int value, int pos) {
    struct Node* newNode = createNode(value);

    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range!\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtPosition(head, 10, 1);  // Insert 10 at position 1
    head = insertAtPosition(head, 30, 2);  // Insert 30 at position 2
    head = insertAtPosition(head, 20, 3);  // Insert 20 at position 2 (between 10 and 30)

    printf("Linked List after insertions at specific positions:\n");
    printList(head);

    return 0;
}
