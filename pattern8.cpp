#include<iostream>
using namespace std;
int main(){
    int n;
    int c;
    cin>>n;
    for(int i=n; i>=1;i--){
        c=1;
        for( int j=1; j<=i;j++){
            cout<<c++;
        }
        cout<<endl;
    }
    return 0;
}