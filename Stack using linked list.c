#include <stdio.h>
#include <stdlib.h>

struct Node  //here we are creating a node with help of structure. Node has two field one is data another is link.
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void push(int value) // This push function will help to insert the element into the stack.
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node *));
    if (head == NULL)
    {
        head = n;
        n->data = value;
        n->next = NULL;
        return;
    }

    n->next = head;
    n->data = value;
    head = n;
}

void pop()  //This pop function will remove the elements from the stack followed by LIFO order.
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("\nStack is empty.\n");
        return;
    }

    head = head->next;
    temp->next = NULL;
}

void peek()
{
    if (head == NULL)
    {
        printf("\nStack is empty.\n");
        return;
    }

    printf("The top element is: %d\n", head->data);
}

void display()
{
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("\nStack is empty.\n");
        return;
    }
    printf("\nElements of stack are:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(void)   //execution of each program start with main() function.
{
    while (1)
    {
        printf("\n=======Menu=======\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n\n");
        int c, n;  //variable declaration.
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;

        default:
            printf("Please select a valid option.");
        }
    }

    return 0;
}
