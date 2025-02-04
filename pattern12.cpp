#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n; i++){
    for (int j=1; j<=i;j++){
        sum += 1;
        cout<<sum;
    }
    cout<<endl;
    }
}

// enter the value of n4
// 1
// 23
// 456
// 78910