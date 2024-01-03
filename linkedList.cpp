#include <iostream>
#include <vector>
using namespace std;
// struct node{
//     int data;
//     struct node *next;
// };
class node{
    public:
        int data;
        node * next;
        node(){
            this->data = 0;
            this->next = NULL;
        }
        node(int _data){
            this->data = _data;
            this->next = NULL;
        }
        node(int _data, node* _next){
            this->data = _data;
            this->next = _next;
        }
        void link_node(node * y){
            this->next = y;
        }
        void traverse(){
            node * temp = this;
            while (temp != NULL){
                cout << temp->data;
                temp = temp->next;
            }
        }
        node * search(int k){
            node * temp = this;
            while (temp != NULL){
                if (temp->data == k){
                    return temp;
                }
                temp = temp->next;
            }
            return NULL;
        }
};
// class linkList{
//     protected:
//         node * head;
//         node * tail;
//     public:
//         linkList(){
//             head = new node();
//             tail = new node();
//             head->next = tail;

//         }
//         linkList(node * _head, node * _tail){
//             head = _head;
//             tail = _tail;
//         }
//         linkList(int n){
//             tail = new node(n);
//             vector<node *> nodes{};
//             nodes.resize(n);
//             nodes[n-1] = tail;
//             for (int i = n - 1; i > 0; i--){
//                 nodes[i-1] = (new node(i, nodes[i]));
//             }
//             head = nodes[0];
//         }

//         void addFront(node * _head){
//             _head->next = head;
//             head = _head;
//         }
//         void removeFront(){
//             head = head->next;
//         }
//         node * search(int k){
//             node * temp = head;
//             while (temp != NULL){
//                 if (temp->data== k){
//                     return temp;
//                 }
//                 temp = temp->next;
//             }
//             throw("Error: not found");
//             return NULL;
//         };
//         void traverse(){
//             node * temp = head;
//             while (temp != NULL){
//                 cout << temp->data;
//                 temp = temp->next;
//             }
//         };
    
// };

node * createList(int n){
    node * tail = new node(n);
    vector<node *> nodes{};
    nodes.resize(n);
    nodes[n-1] = tail;
    for (int i = n - 1; i > 0; i--){
        nodes[i-1] = (new node(i, nodes[i]));
    }

    return nodes[0];
}

void printList(node * head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}
int main(){
    node * head = createList(10);
    printList(head);
    cout << "\n" <<head->search(5)->data;
}

