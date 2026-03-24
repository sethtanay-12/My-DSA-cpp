#include <iostream>
using namespace std;

int main () {
    int n = 101;//binary form of 5 i.e 3^5;
    int x = 3;
    int ans = 1;

    while (n > 0) {
        if(n % 2 == 1){
            ans *= x;
        }

        x *= x;

        n /= 10;
    }

    cout << ans;
}

/*

if we are dealing with -ve
power we will make an if statement 
int the very start

and int that condition will be
if(n<0){
x = 1/x;
n = -n)}

*/