#include <iostream>
using namespace std;

int dectobin(int dec){
    int ans=0 , power =1;
    while( dec > 0) {
        int rem = dec% 2;
        dec /= 2;

        ans += (rem * power);
        power *= 10;
    }
    return ans;
}

int main(){
    int dec=10;
    cout << dectobin(dec) << endl; 
    return 0;
}