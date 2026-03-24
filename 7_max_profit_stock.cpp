#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector <int> vec = {7,1,5,3,6,4};
    int MP = 0;
    int bestbuy = vec[0];

    for(int i = 0 ; i<vec.size() ; i++){
        if (vec[i] >= bestbuy){
            MP = max(MP , vec[i]-bestbuy);
        }

        bestbuy = min(bestbuy , vec[i]);
    }

    cout << MP;
}