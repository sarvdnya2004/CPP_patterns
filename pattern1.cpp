#include<iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"enter the size of n and m";
    cin>>n>>m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// enter the size of n and m4 5
// *****
// *****
// *****
// *****
