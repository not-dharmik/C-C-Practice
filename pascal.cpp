#include <iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for( int i=2; i<=n; i++){
        factorial *= i;
    }
    return factorial;
}
int nCr(int n ,  int r){
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}


int main (){
    
    int n;
    cin>>n;

    for (int i=1;i<=n;i++){
        for(int j=0; j<=i; j++){
            int d= nCr(i , j);
            cout<<d<<"  ";
        }
        cout<<endl;
    }

    return 0;
}