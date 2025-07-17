#include <iostream>
using namespace std;

int main(){ 
    int a =4 , b= 8;
    // 0&0 = 0  0&1 = 0  1&0 = 0  1&1 = 1 
    cout << (a&b) << endl ;
    // 0|0 = 0  0|1 = 1  1|0 = 1  1|1 = 1 
    cout << (a|b) << endl ;
    // 0&^0 = 0  0&^1 = 1  1&^0 = 1  1&^1 = 0 
    cout << (a^b) << endl ;
    // its convert to bin then shift every digit to left
    cout << (4 << 1) << endl ;
    // its convert to bin then shift every digit to right
    cout << (4 >> 1) << endl ;
    cout << sizeof(int);
    cout << sizeof(long int);
    cout << sizeof(short int);
    cout << sizeof(long long);
    return 0;
}