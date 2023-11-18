#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int x,y,z;
    cin>>x>>y>>z;

    int a = std::max(x,y,z);
    cout<<a;
    return 0;
}