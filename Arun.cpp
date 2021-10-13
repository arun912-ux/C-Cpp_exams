#include <stdio.h>
#include <stdlib.h>
#include<cstdio>
 
// A Linked List Node
struct Node
{
    int data;
    struct Node* next;
};
 
// Helper function to create a new node with the given data and
// pushes it onto the list's front
void push(struct Node** head, int data)
{
    // create a new linked list node from the heap
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 
// Helper function to print a given linked list
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("null");
}
 
// Recursive function to move the last node to the front of a given linked list
void rearrange(struct Node** head, struct Node* prev, struct Node* curr)
{
    // if the current node is the last
    if (curr->next == NULL)
    {
        // make its next point to the first node
        curr->next = *head;
 
        // set its previous node to point to null
        prev->next = NULL;
 
        // change head pointer
        *head = curr;
 
        return;
    }
 
    rearrange(head, curr, curr->next);
}
 
// Function to move the last node to the front of a given linked list
void Rearrange(struct Node** root)
{
    // if the list contains at least two nodes
    if (*root && (*root)->next) {
        rearrange(root, NULL, *root);
    }
}
 
int main(void)
{
    // input keys
    int keys[] = { 1, 2, 3, 4 };
    int n = sizeof(keys) / sizeof(keys[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        push(&head, keys[i]);
    }
 
    Rearrange(&head);
 
    printList(head);
 
    return 0;
}