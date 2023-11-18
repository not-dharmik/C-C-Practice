//ADD 2 NUMBERS
#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    int a[t],b[t],c[t];
	for(int i=0;i<t;i++){
	    cin>>a[i]>>b[i];
        c[i]=a[i]+b[i];
	}
    for(int i=0;i<t;i++){
        cout<<c[i]<<endl;
    }
	return 0;
}
