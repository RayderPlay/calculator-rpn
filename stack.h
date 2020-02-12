#ifndef _STACK_H_
#define _STACK_H_

    #include <limits.h> 
    #include <stdio.h> 
    #include <stdlib.h> 

    struct StackNode { 
        int data; 
        struct StackNode* next; 
    }; 
    
    struct StackNode* newNode(int data) 
    { 
        struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode)); 
        stackNode->data = data; 
        stackNode->next = NULL; 
        return stackNode; 
    } 
    
    int isEmpty(struct StackNode* root) 
    { 
        return !root; 
    } 
    
    void push(struct StackNode** root, int data) 
    { 
        struct StackNode* stackNode = newNode(data); 
        stackNode->next = *root; 
        *root = stackNode; 
    } 
    
    int pop(struct StackNode** root) 
    { 
        if (isEmpty(*root)) 
            return INT_MIN; 
        struct StackNode* temp = *root; 
        *root = (*root)->next; 
        int popped = temp->data; 
        free(temp); 
    
        return popped; 
    } 
    
    int peek(struct StackNode* root) 
    { 
        if (isEmpty(root)) 
            return INT_MIN; 
        return root->data; 
    }

    int size(struct StackNode** root){
        if (isEmpty(*root))
            return 0;
        int size = 0;
        struct StackNode* current = *root;
        while (current != NULL){
            ++size;
            current = current->next;
        }
        return size;
    } 

    void clear(struct StackNode** root){  
        if (!isEmpty(*root)){
            int tempSize = size(root);
            for (int i = 0; i < tempSize; i ++){
                *root = (*root)->next;
            }
        } else {
            printf("stack is empty\n");
        } 
    }

    void reverse(struct StackNode** root){
        if (!isEmpty(*root)){
            struct StackNode* temp;
            while (!isEmpty(*root))
            {
                push(&temp, pop(root));
            }
            *root = temp; 
        }
    }

    void fullPrint(struct StackNode** root){
        if (!isEmpty(*root)){
            struct StackNode* temp = *root;
            reverse(&temp);
            int tempSize = size(&temp);
            
            for (int i = 0; i < tempSize; i ++){
                printf("%d ", pop(&temp));   
            }
            printf("\n");
        } else {
            printf("stack is empty\n");
        }
    }

#endif