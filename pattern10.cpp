#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<= (2*n);j++){
            j<=n-i || j>=(2*n)-i+1 ? cout<<" " : cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}