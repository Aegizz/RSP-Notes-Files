#include <iostream>
#include <vector>
using namespace std;
struct node{
    int data;
    struct node *next;
};
void createNode(node*& head, int _data){
    head = new node();
    head->data = _data;
    head->next = NULL;

}

int main(){
    node * head;
    node * one;
    node * two;
    node * three;

    createNode(one, 1);
    createNode(two, 2);
    createNode(three, 3);
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    while (head != NULL){
        cout << head->data;
        head = head->next;
    }

}