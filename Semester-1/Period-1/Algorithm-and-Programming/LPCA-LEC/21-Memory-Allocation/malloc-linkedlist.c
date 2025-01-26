#include <stdio.h> 
#include <stdlib.h> 
 
struct Node { 
    int data; 
    struct Node* next; 
}; 
 
struct Node* createNode(int data) {     
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    if (newNode == NULL) { 
        printf("Memory allocation failed\n"); 
        exit(1);
    } 
    newNode->data = data; 
    newNode->next = NULL;  
    return newNode;  
} 
 
int main() { 
    struct Node* head = createNode(100);      
    printf("Node created with data: %d\n", head->data); 
    free(head); 
    return 0; 
} 

