#include <iostream>
using namespace std;

// int dectobin(int dec){
//     int ans=0 , power =1;
//     while( dec > 0) {
//         int rem = dec% 2;
//         dec /= 2;

//         ans += (rem * power);
//         power *= 10;
//     }
//     return ans;
// }

int bintodec(int binnum){
    int ans =0 ,pow =1 ;
    while (binnum >0 ){
        int rem = binnum %10;
        ans+=rem *pow;
        binnum/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    int dec=50;
    // cout << dectobin(dec) << endl;
    cout << bintodec(1010) << endl ; 
    return 0;
}