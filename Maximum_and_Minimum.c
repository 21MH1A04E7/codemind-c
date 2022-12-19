#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=INT_MIN;
    int s=INT_MAX;
    int *arr=new int[n];
     unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int flage=0;
    for(auto it:mpp){
        if(it.first==it.second){
            l=max(l,it.first);
            s=min(s,it.first);
            flage=1;
        }
    }
    if(flage)
    cout<<s<<" "<<l<<endl;
    else
    cout<<"-1"<<endl;
    delete arr;
}