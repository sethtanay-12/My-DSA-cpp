#include <iostream>
using namespace std;

void reverse (int arr [] , int size , int temp){//returing something in array will be always void   

     for (int i = 0 ; i<size/2 ; i++){
        temp = arr[i];
           arr[i] = arr[size-i-1];
           arr[size-i-1] = temp;
    }

}


int main () {
    int arr [] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(int);
    int temp;//we can only declare temp in reverse function cuz it dosnt have anything ot pass but this is also correct

    reverse (arr , size , temp);

    for(int x = 0 ; x<size ; x++){
        cout << arr [x] << '\n';
    }
}