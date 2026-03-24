#include <iostream>
using namespace std;

int main () {
    int arr [] = {1,2,2,1,1};
    int freq = 0;
    int ans = 0;
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0 ; i < size ; i++){

        if(freq == 0){
            ans = arr[i];//to fix the chosen element for test without changing its value (can be a good idea if we have to fix a value for comparison)
        }

        if(arr[i]==arr[i+1]){
            freq++;
        }
        else{
            freq--;
        }

    }

    cout<<"THE MAJORITY ELEMET IS "<< ans;
}


//O(n) time complexity

//dry run to understand the logic 