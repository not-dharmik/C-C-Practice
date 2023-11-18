//ATM 
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    float b;
    cin>>a>>b;
    if (b>=(a+0.5) && a%5 == 0){
        b = b-(a+0.5);
        cout<<fixed<<setprecision(2)<<b<<endl;
    }
    else{
        cout<<fixed<<setprecision(2)<<b<<endl;
    }
    return 0;
}