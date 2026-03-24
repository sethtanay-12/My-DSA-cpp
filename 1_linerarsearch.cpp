#include <iostream>
using namespace std;

int main () {
    int arr [] = {1,5,6,8,2,4,7};//target = 8
    int size = sizeof(arr)/sizeof(int);


    for (int i = 0 ; i<size ; i++) {
        if(arr[i] == 8){
            cout << "THE GIVEN NUMBER IS ON THE INDEX " << i;
        }
    }
}