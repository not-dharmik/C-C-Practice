#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            j<=n-i ? cout<<" " : cout<<"*";    
        }
        cout<<endl;
    }
    return 0;
}