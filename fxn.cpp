#include <iostream>
using namespace std;

int factorial (int n){
    int tot =1;
    for(int i=n; i>=1; i--){
        tot *= i;
    }
    return tot;
}

int main (){
    int d;
    cin>>d;

    cout<<factorial(d);
    return 0;
}