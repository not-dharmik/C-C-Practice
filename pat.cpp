#include<iostream>
#include<vector>
using namespace std;
class pro{
    public:
    int nu;
    pro()
    {
            nu=0;   
    }
    pro(int nn){
        nu=nn;
    }
};
void printSubset(int arr[], int n, int r, int index, int data[], int i){
    if (index==r){
        for (int j=0; j<r; j++)
            cout<<data[j];
        cout<<endl;
        return;    
    }
    if( i >= n)
        return;
    data[index] = arr[i];
    printSubset(arr, n, r, index+1, data, i+1);
    printSubset(arr, n, r, index, data, i+1);    
}
int main(){
    string s;
    vector<char> v;
    cin>>s;
    for( char c:s){
        if(isalpha(c)){
            v.push_back(c);
        }
    }
    int n=v.size();
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=v[i];
    }
    int r=3;
    pro p(r);
    int data[r];
    printSubset(arr, n, r, 0, data, 0);
    return 0;
}