#include<iostream>
#include<vector>  
using namespace std;

vector<int> pairSum(vector<int> arr, int target) {
    int i = 0;
    int j = arr.size() - 1;
    vector<int> ans;
    
    while(i < j) {  
        if(arr[i] + arr[j] == target) {
            ans.push_back(i); 
            ans.push_back(j);
            return ans;
        }
        else if(arr[i] + arr[j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
    return {-1, -1}; 
}

int main() {
    vector<int> arr = {1,7,8,11};
    int target = 8;
    
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << " " << ans[1] << endl; 
    
    return 0;
}
