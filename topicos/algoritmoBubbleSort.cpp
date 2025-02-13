#include <iostream>

using namespace std;

int myArr[] = {5, 2, 4, 6, 1, 3, 8, 7, 9, 0, 10,
               15, 12, 14, 16, 11, 13, 18, 17, 19, 20,
               25, 22, 24, 26, 21, 23, 28, 27, 29, 30}; 

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void mostraArray(int arr[], int n, string msg){
    cout << "Estou a  mostrar o array " << msg << "\n\n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\n"; 
}

int main(){

    mostraArray(myArr, sizeof(myArr)/sizeof(myArr[0]), 
                "antes de ordenar");
    bubbleSort(myArr, sizeof(myArr)/sizeof(myArr[0]));
    mostraArray(myArr, sizeof(myArr)/sizeof(myArr[0]), 
                "depois de ordenar");
    return 0;
}