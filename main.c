/* @autor Andrii Torulia */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "stack.h"

#define MAX_BUFFER_SIZE 100
 
struct Variables
{
    int a, b;
    int temp;
}var;


//Start of main function
int main(void)
{   
    struct StackNode* root = NULL; 

    char buff[MAX_BUFFER_SIZE];
    double x;
    int result;

    while(x != 'q'){
        //Read a string from user
        if( scanf("%s", buff) < 1 ){
            printf("syntax error\n");
            return 0;
        }
 
        //Checks if user entered a number
        if(isdigit(buff[0]) || isdigit(buff[1])){
            sscanf( buff, "%lf", &x);
            push(&root, x);
        } else {
        //Place statements to do operations
            switch(buff[0])
            {
                //To handle addition
                case '+':
                    if(size(&root) >= 2){
                        var.a = pop(&root);   
                        var.b = pop(&root);
                        result = var.a + var.b;

                        push(&root, result);
                    } else {
                        printf("Not enough operands in stack for operation \n");
                    }

                    break;
                //To handle subtraction
                case '-':
                    if(size(&root) >= 2){
                        var.a = pop(&root);   
                        var.b = pop(&root);
                        result = var.b - var.a;

                        push(&root, result);
                    } else {
                        printf("Not enough operands in stack for operation \n");
                    }
                    break;
                //To handle multiplication
                case '*':
                    if(size(&root) >= 2){
                        var.a = pop(&root);   
                        var.b = pop(&root);
                        result = var.a * var.b;

                        push(&root, result);
                    } else {
                        printf("Not enough operands in stack for operation \n");
                    }
                    break;
                //To handle division
                case '/':
                    if(size(&root) >= 2){
                        var.a = pop(&root);   
                        var.b = pop(&root);
                        result = var.b * var.a;

                        push(&root, result);
                    } else {
                        printf("Not enough operands in stack for operation \n");
                    }
                    break;
                //To handle printing the top stack item
                case 'p':
                    printf("Top element is %d\n", peek(root)); 
                    break;
                //To handle popping a number off the stack
                case 'P':
                    pop(&root);
                    break;
                //To handle dublicate top element
                case 'd':
                    push(&root, peek(root));
                    break;
                // To handle full print
                case 'f':
                    fullPrint(&root);
                    break;
                //To handle reverse
                case 'r':
                    reverse(&root);
                    break;
                //To handle clear stack
                case 'c':
                    clear(&root);
                    break;
                //To handle quitting the program
                case 'q':
                    return 0;
                    break;
            }
        }
    }
}