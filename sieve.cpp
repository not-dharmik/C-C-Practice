//Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveofEratosthenes(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            for (int j = (2*i); j <= n; j+=i)
            {
                prime[j]=false;
            }    
        }
    }
    for (int i = 2; i < n+1; i++)
    {
        prime[i]==true ? cout<<i<<" " : cout<<"";     
    } 
}

int main(){
    int n=10;
    SieveofEratosthenes(n);
}