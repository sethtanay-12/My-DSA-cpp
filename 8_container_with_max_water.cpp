//two pointer approach
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int lp = 0;                        
    int rp = vec.size() - 1;          
    int max_water = 0;

    while(lp < rp) {//till the lp is less than rp
        int width = rp - lp;                   
        int height = min(vec[lp], vec[rp]);    
        int area = width * height;          
        
        max_water = max(max_water, area);      
        
        
        if(vec[lp] < vec[rp]) {//the water capacity depends on the shorter one always
            lp++;
        } else {
            rp--;
        }
    }
    cout << max_water;  
}
