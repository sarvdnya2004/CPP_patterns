#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;
    for(int i =1;i <=n; i++){
        int k = n-i+1;
        for(int j =1; j <= k ; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}

// enter the n4
// ****
// ***
// **
// *