//SUM OF DIGITS
#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    int arr[t],sol[t];
    
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<t;i++){
        int n=arr[i];
        int sum =0;
        while(n>0){
            sum += (n%10);
            n /= 10;
        }   
        cout<<sum<<endl;
    }

	return 0;
}
