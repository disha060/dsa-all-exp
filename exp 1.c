#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main() {
    int value, choice;
    while (1) {
        printf("\n\nSelect Operation on Stack:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nWrong selection!!! Try again!!!");
        }
    }
    return 0;
}

void push(int value) {
    if (top == SIZE - 1) {
        printf("\nStack is Full!!! Insertion is not possible!!!");
    } else {
        top++;
        stack[top] = value;
        printf("\nInsertion success!!!");
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack is Empty!!! Deletion is not possible!!!");
    } else {
        printf("\nDeleted : %d", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is Empty!!!");
    } else {
        int i;
        printf("\nStack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

output:
Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to be inserted: 10

Insertion success!!!

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to be inserted: 20

Insertion success!!!

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 1
Enter the value to be inserted: 30

Insertion success!!!

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3

Stack elements are:
30
20
10

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 2

Deleted: 30

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 3

Stack elements are:
20
10

Select Operation on Stack:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice: 4
