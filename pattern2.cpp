#include<iostream>
using namespace std;
int main()
{
    int n , m;
    cout<<"enter the n and m";
    cin>>n>>m;

    for(int i = 1; i <=n; i++){
        for (int j = 1; j <=m; j++){
            if(i == 1 || i == n || j == 1 || j == m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
// enter the n and m4 5
// *****
// *   *
// *   *
// *****