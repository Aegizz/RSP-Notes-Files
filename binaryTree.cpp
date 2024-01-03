#include <iostream>
using namespace std;
// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

class Node{
    public:
        int data;
        Node * left;
        Node * right;
        Node(){
            data = 0;
            left = NULL;
            right = NULL;
        }
        Node(int _data){
            data = _data;
            left = NULL;
            right = NULL;
        }
        Node * findElementBT(int elem){
            if (elem == data){
                return this;
            } else if (elem != data){
                Node * temp;
                if (left != NULL){
                    temp = left->findElementBT(elem);
                    if (temp != NULL){
                        return temp;
                    }
                } else if (right != NULL){
                    temp = right->findElementBT(elem);
                    if (temp != NULL){
                        return temp;
                    }
                }
            }
            cout << "Error Not found returning null";
            return NULL;
        }
        Node * findElementBST(int elem){
            if (elem == data){
                return this;
            } else{
                Node * temp;
                if (elem > data){
                    temp = right->findElementBST(elem);
                    if (temp != NULL){
                        return temp;
                    }
                } else if (elem < data){
                    temp = left->findElementBST(elem);
                    if (temp != NULL){
                        return temp;
                    }
                }
            }
            cout << "Error Not found returning null";
            return NULL; 
        }
        void insertNewElement(int n){
            if (n == data){
                throw("Error, using BST-like function in BT format");
            } else if (n < data){
                if (left == NULL){
                    Node * temp = new Node(n);
                    left = temp;
                    return;
                }
                left->insertNewElement(n);
            } else if (n > data){
                if (right == NULL){
                    Node * temp = new Node(n);
                    right = temp;
                    return;
                }
                right->insertNewElement(n);
            }
        }
        void removeElement(int elem){
            Node * parent = findParent(elem);
            if (parent == NULL){
                printf("Not found");
            }
            if (parent->left != NULL &&parent->left->data == elem){
                if (parent->left->left == NULL && parent->left->right == NULL){
                    parent->left = NULL;
                } else if (parent->left->left != NULL && parent->left->right != NULL){
                    cout << "2 sub-trees not implemented.";
                } else if (parent->left->left == NULL){
                    parent->left = parent->left->right;
                } else {
                    parent->left = parent->left->left;
                }
                
            } else if (parent->right != NULL && parent->right->data == elem){
                if (parent->right->left == NULL && parent->right->right == NULL){
                    parent->right = NULL;
                } else if (parent->right->left != NULL && parent->right->right != NULL){
                    cout << "2 sub-trees not implemented.";
                } else if (parent->right->left == NULL){
                    parent->right = parent->right->right;
                } else {
                    parent->right = parent->right->left;
                }
            }

        }
        Node * findParent(int elem){

            if (elem == data){
                throw("ERROR CANNOT REMOVE ROOT USE DELETE TREE");
            }
            Node * temp;

            if (left != NULL){
                if (elem == left->data){
                    return this;
                }
                temp = left->findParent(elem);
                if (temp != NULL){
                    return temp;
                }
            }
            if (right != NULL){
                if (elem == right->data){
                    return this;
                }
                temp = right->findParent(elem);
                if (temp != NULL){
                    return temp;
                }  
            }
            cout << "Error :Not found";
            return NULL;
        }
        void createTreeBST(int n){
            int half = (n+1)/2;
            data = (n+1)/2;
            for (int i = (n+1)/2 - 1; i > 0; i--){
                insertNewElement(i);
            }
            for (int i = (n+1)/2 + 1; i < n + 1; i++){
                insertNewElement(i);
            }
        }
        void traverseTree(){
            if (left != NULL){
                left->traverseTree();
            }
            cout << data << " ";
            if (right != NULL){
                right->traverseTree();
            }
            return;
        }
        int largestBST(){
            while (right != NULL){
                right->largestBST();
            }
            return right->data;
        }
        ~Node(){
            delete(left);
            delete(right);
        }
};




int heightTree(){
    return 0;
}
int nodeLevel(){
    return 0;
}



int main(){
    Node * root= new Node(2);

    root->insertNewElement(1);
    root->insertNewElement(3);
    root->insertNewElement(4);


    root->traverseTree();
    cout << "\n";
    delete(root);

    root = new Node();
    root->createTreeBST(10000);
    cout << "\nFind 5, in log(n): " <<root->findElementBST(5)->data << endl;

    root->removeElement(5);

    root->traverseTree();
    return 0;
}