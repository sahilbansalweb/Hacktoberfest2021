#include <stdio.h>
#include <string.h>
#include <math.h>

int s[25] = {0};
int top = -1;
int ch;

void push(int ele)
{
    if (top == 24)
        printf("Stack is full!\n");
    else
    {
        top++;
        s[top] = ele;
    }
}

int pop()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        ch = s[top];
        top--;
    }
    return ch;
}

int main()
{
    char postfix[25] = {'\0'}, ele;
    int i, num2, num1, ans;
    printf("Enter postix expression: ");
    scanf("%s", postfix);
    i = 0;
    while (i <= strlen(postfix) - 1)
    {
        ele = postfix[i];
        if (isalnum(ele))
        {
            push(ele - '0');
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch (ele)
            {
            case '^':
                ans = pow(num2, num1);
                break;
            case '/':
                ans = num2 / num1;
                break;
            case '*':
                ans = num2 * num1;
                break;
            case '+':
                ans = num2 + num1;
                break;
            case '-':
                ans = num2 - num1;
                break;
            }
            push(ans);
        }
        i++;
    }
    printf("Answer of the postfix expression is %d\n", pop());
    return 0;
}