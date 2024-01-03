#include <iostream>
#include <vector>
using namespace std;
struct node{
    int data;
    struct node *next;
};
class Graph{
protected:
    int V;
    vector<node*> adjList;
    bool *visited;
public:
    Graph(int V){
        this-> V = V;
        visited = new bool[V];
        adjList
    }

    void addEdge(int x, int y){
        node* vertix;
        adjList[x] = createNode(vertix, x);
        adjList[x]->next.createNode(vertix, y);
        
        adjList[y].push_back(x);
    }
    void printAdjList(){
        for (int i = 0; i < V; i++){
            cout << i << ", ";
            for (int j = 0; j < (l)[i].size(); j++){
                cout << (l)[i][j] << " ";
            }
            cout << endl;
        }
    }
    void DFS(int vertex){
        visited[vertex] = true;
        vector<int> adjList = l[vertex];
        cout << vertex;
        for (int i=0; i < adjList.size(); i++){
            if (!visited[adjList[i]]){
                cout << "->";

                DFS(adjList[i]);
            }
        }

    }
    void BFS(int vertex){
        visited[vertex] = true;
        vector<int> queue;
        queue.push_back(vertex);
        while (!queue.empty()){
            int head = queue.front();
            cout << head << "->";
            for (int i = 0; i < l[head].size(); i++){
                if (!visited[l[head][i]]){
                    queue.push_back(l[head][i]);
                    visited[l[head][i]] = true;
                }
            }
            queue.erase(queue.begin());


        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);


    g.BFS(0);
    
    return 0;


}

void createNode(node*& head, int _data){
    head = new node();
    head->data = _data;
    head->next = NULL;

}