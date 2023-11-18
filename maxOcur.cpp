#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int size)
{
    int occur[size/2],max=INT_MIN;
    for(int i=0;i<size/2;i++){
        int n = a[i];
        int count=1;
        for(int j=i+1;j<size;j++){
            n == a[j] ? count+=1 : count+=0; 
        }
        max<count ? max=count : max+=0;
        occur[i]=count;
    }
    for (int i = 0; i < size/2; i++)
    {
        if(max==occur[i])
            cout<<a[i];
            break;
    }    
}
int main(){

    int t;
    cin >> t;
    int n=t;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    majorityElement(arr,n);
    //cout << obj.majorityElement(arr, n) << endl;
    return 0;
}