#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int res=arr[0];
    int maxsum=arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxsum = max(arr[i], maxsum + arr[i]);
        res = max(res, maxsum);
    }
    cout << res << " ";
    return 0;
}