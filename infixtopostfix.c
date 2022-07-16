// infix expression to postfix expression
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Test
// Test 1
// Test 2


# define MAX 50
int stack[MAX];
int top=-1;
void push(char x) 
{
   
        top=top+1;
        stack[top]= x;
   
}
char pop(){
     if(top==-1)
        {
                printf("Stack Underflow\n");
        }
        else{
               return stack[top--];
        }
}
int priority(char x){
    
    if(x=='(')
    return 0;
    if(x=='+'||x=='-')
    return 1;
    if(x=='*'||x=='/')
    return 2;
    }
    int main(){
        char exp[MAX];
        char *e,x;
        printf("enter the expression:");
        scanf("%s",&exp);
        e=exp;
        while(*e != '\0'){
            if(isalnum(*e))
            printf("%c",*e);
            else if(*e == '(')
            push(*e);
            else if(*e == ')'){
                while( (x=pop) != '(')
                printf("%c",x);
            }
            else
            {
                while( priority(stack[top] >= priority(*e)))
                printf("%c",pop());
                push(*e);
            }
            e++;
            
        }
        while( top != -1){
            printf("%c",pop());
        }
        
    }
