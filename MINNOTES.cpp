#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main(){
    lli t;
    cin>>t;
    while (t--)
    {
        lli n;
        cin>>n;
        lli sum=0;
        vector<lli> ar(n);
        for(lli i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        if(n==1){
            cout<<"1"<<endl;
        }
        vector<lli>pre(n),suf(n);
        pre[0]=ar[0];
        suf[n-1]=ar[n-1];
        for(lli i=1;i<n;i++)
            pre[i]=__gcd(pre[i-1],ar[i]);
        for(lli i=n-2;i>=0;i--)
            suf[i]=__gcd(suf[i+1],ar[i]);

        lli ans=sum/pre[n-1];
        for (lli i = 0; i < n; i++)
        {
            lli k = __gcd((i-1<0 ? 0:pre[i-1]),(i+1>=n? 0:suf[i+1]));
            ans=min(ans, 1 +(sum-ar[i])/k);
        }
        cout<<ans<<endl;
    }
}