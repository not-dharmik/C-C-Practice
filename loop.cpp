#include<iostream>
using namespace std;
int main(){
    int n, i, sum=0;
    cout<<"Sum till:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}