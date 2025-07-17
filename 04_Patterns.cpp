#include <iostream>
using namespace std;

int main(){
    //1234
    //1234
    //1234
    //1234

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

    //1
    //12
    //123
    //1234

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

    //ABCD
    //ABCD
    //ABCD
    //ABCD

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     char ch='A';
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<ch;
    //         ch=ch+1;
    //     }
    //     cout<<"\n";
    // }

    // 123
    // 456
    // 789

    // int n=3;
    // int num=1;
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<"\n";
    // }

    // abc
    // def
    // ghi

    // int n=3;
    // char ch='a';
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<"\n";
    // }

    // *
    // **
    // ***
    // ****

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

    // 1
    // 22
    // 333
    // 44444

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

    // a
    // bb
    // ccc
    // dddd

    // int n=4;
    // for (int i = 1; i <=n; i++) {
    //     char ch='a' + i-1;
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<ch;
    //     }
    //     cout<<"\n";
    // }

    // 4444
    // 333
    // 22
    // 1

    // int n=4;
    // for (int i = n; i >=1; i--) {
    //     for (int j = i; j >=1; j--)
    //     {
    //         cout<<i;
    //     }
    //     cout<<"\n";
    // }

    // 1
    // 21
    // 321
    // 4321

    // int n=4;
    // for (int i = 0; i <n; i++) {
    //     for (int j = i+1; j >0; j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

    // 1
    // 23
    // 456
    // 78910

    // int n=4;
    // int c=1; // for char c="a";
    // for (int i = 0; i <n; i++) {
    //     for (int j = i+1; j>0; j--)
    //     {
    //         cout<<c;
    //         c++;
    //     }
    //     cout<<"\n";
    // }

    // 1111
    //  222
    //   33
    //    4

    // int n=4;
    // for (int i = 0; i<n; i++) {
    //     for (int j = 0; j <i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k=0; k<n-i; k++)
    //     {
    //         cout<<(i+1);
    //     }
    //     cout<<"\n";
    // }

    //    1
    //   121
    //  12321
    // 1234321

    // int n=4;
    // for (int i = 0; i<n; i++) {
    //     for (int j = n; j >i; j--)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k=0; k<=i; k++)
    //     {
    //         cout<<(k+1);
    //     }
    //     for (int j = i; j>=1; j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

    //    *
    //   * *
    //  *   *
    // *     *
    //  *   *
    //   * *
    //    *

    int n=4;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<'*';
        if (i != 0){
            for (int j = 0; j < 2*i-1; j++)
            {
                cout<< " ";
            }
            cout<< '*';
        }        
        cout<<"\n";
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; i++)
        {
            cout<< " ";
        }
        cout<< '*';
        if ( i !=n-1)
        {
            for (int j = 0; j <2*(n-1)-5; j++)
            {
                cout<< " "; 
            }
            
            cout << "*";
        }
        cout<<"\n";        
    }
    return 0;
}