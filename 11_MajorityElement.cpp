#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> arr = {3, 8, 5, 4, 2, 7, -8, 1, };
    // int max=0;
    // int target=9;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr.size(); j++)
    //     {
    //         max = arr[i] + arr[j];
    //         if (target == max)
    //         {
    //             cout << arr[i] <<  arr[j] << " ";
    //         }
    //     }
    // }
    vector<int> arr = {2, 7, 11, 15};
    int n = arr.size();
    int i = 0, j = n - 1;
    int target = 13;

    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            cout << "Pair found at indices: " << i << " and " << j << endl;
            break;
        }
    }
    return 0;
}