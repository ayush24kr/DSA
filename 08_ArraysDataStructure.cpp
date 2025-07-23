#include <iostream>
using namespace std;

void revarray(int arr[],int sz){
    int start = 0 , end = sz -1;
    while (start < end)
    {
        /* code */
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}

int main(){
//     int marks[] = {5,15,42,1,-15,24};
//     int size =6;
//     int largest =INT8_MIN;
//     int smallest = INT8_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         smallest = min(marks[i],smallest);
//         largest = max(marks[i],largest);
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if (largest == marks[i])
//         {
//             cout << i << endl ;
//         }
//         if (smallest == marks[i])
//         {
//             cout << i << endl ;
//         }
//     }
//     cout << "largest number in the array " << largest << endl ;
//     cout << "smallest number in the array " << smallest << endl ;
    int arr[] = {4,1,2,9,1,5};
    int sz = 6;

    revarray(arr,sz);
    for(int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}