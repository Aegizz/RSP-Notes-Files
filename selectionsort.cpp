#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> array){
    int temp;
    for (int i = 0; i < array.size(); i++){
        for (int j = i; j < array.size(); j++){
            if (array[i] > array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for (int i = 0; i < array.size(); i++){
        cout << array[i] << "\n";
    }
    return array;
}

int main(){
    vector<int> array{5,4,3,2,1};
    array = selectionSort(array);
}