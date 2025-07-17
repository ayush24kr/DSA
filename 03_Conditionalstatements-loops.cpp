#include <iostream>
using namespace std;

int main(){
    int age=10;
    // if (age==0){
    //     cout<< age;
    // } else if(age=1){
    //     cout<<age;
    // } else {
    //     cout<< "invalid";
    // }
    // cout << (age>0 ? "positive":"negative");
    // while (age<=5){
    //     cout << age << "";
    //     age++;
    // }
    for (int i = 0; i < age; i=i+2){
        cout<< i<< "";
    }
    return 0;
}