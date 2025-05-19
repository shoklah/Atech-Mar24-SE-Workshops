#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data, struct Node* head){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if(newNode == NULL) {
        printf("Memory allocation failed");
        exit(-1);
    }
    newNode->data = data; // (*newNode).data = data;
    newNode->next = head; // (*newNode).next = head;
    return newNode;
}

struct Node* reverseLinkedList(struct Node* head){
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;
 
    while(current != NULL){
       
        next = current->next;
        
        current->next = prev;
        
        prev = current;
       
        current = next;
        
    }

    return prev;
}

void printlist(struct Node* head){
    struct Node* current = head;
    while(current != NULL) {
        printf("%d ->",current -> data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    struct Node* list = NULL;

    for (int i = 0; i < 5; i++) {
        list = createNode(data[i], list);
    }
    list = reverseLinkedList(list);
    printlist(list);
    return 0;
}
