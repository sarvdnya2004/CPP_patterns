#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int num =0;
    for(int i =1 ; i<=n;i++){
        for(int j =1; j<=n ;j++){
            num = num + 1;
            cout<<num ;
        }
        cout<<endl;
    }
}

// enter the value of n
// 3
// 123
// 456
// 789