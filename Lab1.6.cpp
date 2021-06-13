#include <iostream>

using namespace std; 

struct node{
    char data;
    node* next;
}

struct Stack{
    node* top;
}

Stack* createStack(char c)
{
    Stack* temp = new Stack;
    temp->top->data = c;
    temp->top->next = NULL;
    return temp;
}

void ShowStack(Stack* stk)
{
    node* temp = stk->top;
    while(temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    Stack* stk = createStack('a');
    ShowStack(stk);
}