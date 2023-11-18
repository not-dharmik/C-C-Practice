#include <iostream>
#include <climits>
using namespace std;

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        maxi= max(maxi,arr[i]);
        mini= min(mini,arr[i]);
    }
    
    cout<<"Max: "<<maxi<<endl;
    cout<<"Min: "<<mini<<endl;    
    return 0;
}