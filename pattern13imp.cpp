#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i = 1; i<= n ;i++){
        for(int j =1; j<=i;j++){
            int num = i + (j-1);
            cout<<num;
        }

    cout<<endl;
    }
}

// enter the value of n4
// 1
// 23
// 345
// 4567