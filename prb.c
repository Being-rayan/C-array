/*WAP to create 1d array and perform following : a. insertion
b.deletion c.linear search d.sorting (bubble) e.traversal by using menu driven programming*/
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverse(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node* head) {
    return head == NULL;
}


void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;

} }