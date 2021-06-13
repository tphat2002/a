#include <iostream>
// Stackkkkkkkkkkkk 
using namespace std; 

struct node{
    char data;
    node* next;
};

struct Stack{
    node* top;
};

Stack createStack(char c)
{
    Stack temp;
    temp.top = new node;
    temp.top->data = c;
    temp.top->next = NULL;
    return temp;
}

bool empty(Stack stk)
{
    if (stk.top == NULL)
        return true;
    return false;
}

void push(Stack& stk, char c)
{
    if(stk.top == NULL)
    {
        stk = createStack(c);
    }
    else
    {
        node* temp = new node;
        temp->data = c;
        temp->next = stk.top;
        stk.top = temp;
    }
}

void pop(Stack& stk)
{
    if (stk.top == NULL)
    {
         return;
    }
    else
    {
        node* temp = stk.top;
        stk.top = temp->next;
        delete temp;
    }
}

void ShowStack(Stack stk)
{
    node* temp = stk.top;
    while(temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Stack stk;
    for(int i = 25; i >= 0; i--)
    {
        push(stk, char(i + 65));
    }
    
    if(empty(stk))
        cout << "Yes - It's empty" << endl;
    else
        cout << "No - It's not empty" << endl ;

    ShowStack(stk);

    while(!empty(stk))
    {
        pop(stk);
        ShowStack(stk);
    }

    if(empty(stk))
        cout << "Yes - It's empty" << endl;
    else
        cout << "No - It's not empty" << endl ;
}
