// Name: rpn.c
// Purpose: Learn C Programming
// Author: CatMarkDev
// Date: 06/20/2026

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
int evaluate_RPN_expression(const char *expression);

int main(void) {
    char ch;
    
    for (;;){
        printf("Enter an RPN expression: ");
        for (;;) {
            scanf(" %c", &ch);
            if (ch == 'q' || ch == 'Q') {
                printf("Program terminated.\n");
                return 0;
            }
            evaluate_RPN_expression(&ch);
            if (ch == '=') {
                break; 
            }
        }
    }
}
void make_empty(void){
    top = 0;
}
bool is_empty(void){
    return top == 0;
}
bool is_full(void){
    return top == STACK_SIZE;
}
void push(int i){
    if(is_full()){
        printf("Expression is too complex\n");
        exit(EXIT_FAILURE);
    }else {
        contents[top++] = i;
    }
}
int pop(void){
    if(is_empty()){
        printf("Not enough operands in expression\n");
        exit(EXIT_FAILURE);
    } else {
        return contents[--top];
    }
}
int evaluate_RPN_expression(const char *expression){
    int operand1, operand2;
    if (isdigit((unsigned char)*expression)) {
        push(*expression - '0'); 
    } else if (*expression == '+') {
        operand2 = pop();
        operand1 = pop();
        push(operand1 + operand2);
    } else if (*expression == '-') {
        operand2 = pop();
        operand1 = pop();
        push(operand1 - operand2);
    } else if (*expression == '*') {
        operand2 = pop();
         operand1 = pop();
        push(operand1 * operand2);
    } else if (*expression == '/') {
        operand2 = pop();
        operand1 = pop();
        push(operand1 / operand2);
    } else if (*expression == '=') {
        printf("Value of expression: %d\n", pop());
        make_empty();
        return 0;
    } else {
        return 0;
    }
}