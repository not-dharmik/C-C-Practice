#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector <char> arr;
    int sum =0;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            arr.push_back(s[i]);
            sum += s[i] - '0';
        }
    }
    int c =0;
    do{
        c++;
        cout<<"{";
        for(int i=0;i<arr.size();i++){
            if(i != arr.size() - 1)
                cout<<arr[i]<<",";
            else{
                cout<<arr[i]<<"}";
            }
        }
        cout<<endl;
    }while(next_permutation(arr.begin(),arr.end()));
   cout<<endl;
    cout<<c*sum;


}