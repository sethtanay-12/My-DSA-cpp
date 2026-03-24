#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1,-8,-9,5,10,4,6};
    int currentsum = 0;
    int size = sizeof(arr)/sizeof(int);
    int maxsum = INT_MIN;
    
    for(int x = 0; x < size; x++) {
        currentsum += arr[x];
        maxsum = max(currentsum,maxsum);
        
        if(currentsum < 0) {
            currentsum = 0;  // Reset only AFTER updating  maxsum because if ther eis any array full of negetive numbers then it will directly make the sum 0 before addign it to max sum
        }
    }
    
    cout << maxsum;  
}
