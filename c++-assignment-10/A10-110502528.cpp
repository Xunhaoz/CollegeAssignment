/*
Assignment 10
Name: ±i³Ôµq
Student Number: 110502528
Course 2021-CE1003-A
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class Node
{
    public:
    char data;
    class Node *next;
};

typedef class Node stack_node;
typedef stack_node *linked_stack;

linked_stack top = NULL;

int isEmpty();
void push(char);
void pop();
void DFS(linked_stack);

int main(){
    char value;
    string user_input;

    while(1){
        cin >> user_input;

        if(user_input == "pop"){
            if(isEmpty())
                cout << "empty"<<endl;
            else{
                pop();
            }
        }

        else if(user_input == "push"){
            cin >> value;
            push(value);
        }

        else if(user_input == "list"){
            if(!isEmpty()){
                DFS(top);
                cout << endl;
            }
            else
                cout << endl;
        }

        else
            break;

    }


    return 0;
}

int isEmpty(){
    if(top == NULL) return 1;
    return 0;
}

void push(char data){
    linked_stack new_add_node;
    new_add_node = new stack_node;
    new_add_node->data = data;
    new_add_node->next = top;
    top = new_add_node;
}

void pop(){
    linked_stack ptr;
    char temp;
    ptr = top;
    top = top->next;
    temp = ptr->data;
    free(ptr);
    cout << temp << endl;
}

void DFS(linked_stack first){
    if(first->next != NULL)
        DFS(first->next);
    cout << first->data << ' ';
}
