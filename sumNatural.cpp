#include <iostream>
using namespace std;

int sumNatural(int num){
    int ans = (num*(num+1))/2;
    return ans;
}
int main (){
    int n;
    cin>>n;
    int sum = sumNatural(n);
    cout<<sum<<endl;
    return 0;
}