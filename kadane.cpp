#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        
        int tot=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=sum+arr[i])
                sum+=arr[i];
            else
                sum=arr[i];
            
            if(tot<sum)
                tot=sum;
        }
        return tot;
    }
};
int main()
{
    int t,n;
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        cin>>n; //input size of array
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        Solution ob;
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
