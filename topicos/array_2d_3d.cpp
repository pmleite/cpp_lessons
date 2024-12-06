#include <iostream>

using namespace std;

const int dimensao = 10;

int arr3D[3][3][3] = {
    {{1,2,3},{1,2,3},{1,2,3}},
    {{1,2,3},{1,2,3},{1,2,3}},
    {{1,2,3},{1,2,3},{1,2,3}}
};

int main(){
    cout << arr3D[1][1] << endl; 
    return 0;
}