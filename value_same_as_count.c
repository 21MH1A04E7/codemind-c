#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>mpp;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int c=0;
    for(auto it:mpp){
        if(it.first==it.second){
            c++;
        }
    }
    cout<<c<<endl;
}