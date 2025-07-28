#include <iostream>
using namespace std;

int main(){
    // // time complexity 
    // // its not the acutal time taken by the program but amount of time taken as function of input size(n)
    // // space complexity
    // // amount of space taken by an algorithm as function of input size 

    // // O(1) Constant time complexity
    // // sum of no from 1 to n 
    // int n ;
    // cin >> n ;
    // int ans = n*(n+1)/2;
    // cout << ans << " ";

    // // O(n)
    // // N factorial
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact *= i;
    // }
    // // Nth fibonacci - dp
    // for (int i = 2; i <=n; i++)
    // {
    //     dp[i] = dp[i-1] + dp[i-2]
    // }
    // // Kadane Algorithm
    // int currsum = 0 , ans = INT16_MIN;
    // for (int i = 0; i <n; i++)
    // {
    //     currsum += arr[i];
    //     ans = max(currsum,ans);
    //     currsum = currsum < 0 ? 0 : currsum ;
    // }
    
    // // O(n^2)&O(n^3)
    // // Bubble Sort
    // for (int i = 0; i < n-1; i++){
    //     for (int j = 0; j < n-i-1; j++){
    //         if (arr[j] > arr[j+1]){
    //             swap(arr[j],arr[j+1])
    //         }
    //     }
    // }
    
    // // O(logn)
    // // Binary Search
    // int s=0, e=n-1;
    // while(s <= e) {
    //     int mid = s + (e-s)/2;
    //     if(arr[mid] < target) {
    //         s = mid + 1;
    //     } else if(arr[mid] > target) {
    //         e = mid - 1;
    //     } else {
    //         return mid; //ans
    //     }
    // }        

    // // O(nlogn)
    // // sortings , merge sort , quick sort , greedy algos
    
    return 0;
}