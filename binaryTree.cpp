#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

void removeElement(){

}
void findElement(){

}
void traverseTree(){

}
int heightTree(){
    return 0;
}
int nodeLevel(){
    return 0;
}
int sizeTree(){
    return 0;
}

void insertLeftElement(Node * superLeaf, Node * leaf){
    if (superLeaf == nullptr){
        throw "Error SuperLeaf is null type";
    }
    superLeaf->left = leaf;
}
void insertRightElement(Node * superLeaf, Node * leaf){
    superLeaf->right = leaf;
}
void createElement(Node *& element, int _data){
    element = new Node();
    element->data = _data;
    element->left = nullptr;
    element->right = nullptr;
}
Node * subLeaf(Node* root, int i){
    if (i == 0){
        return root;
    } if (i == 1){
        if (root->left == nullptr){
           cout << "superleaf->left is of type NULL";
        }
        return root->left;
    } else if (i == 2){
        if (root->right == nullptr){
           cout << "superleaf->right is of type NULL";
        }
        return root->right;
    } else{
        if (i < 0){
            throw "not a positive number";
        }
        i = i - 2;
        Node * sub = subLeaf(root, i);
        return sub;
    }
}

int main(){
    Node * root;
    Node * two;
    Node * three;
    Node * four;
    createElement(root, 1);
    createElement(two, 2);
    createElement(three, 3);
    createElement(four, 4);
    insertLeftElement(root, two);
    insertRightElement(root, three);
    insertLeftElement(root->left, four);
    for (int i = 0; i < 30; i++){
        Node * temp = subLeaf(root, i);
        if (temp->data != NULL){
            cout << temp->data << "\n";
        }
    }   
    return 0;
}