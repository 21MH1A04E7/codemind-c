#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(m[arr[i]]==true){
            continue;
        }else{
            cout<<arr[i]<<" ";
            m[arr[i]]=true;
        }
    }
    delete arr;
    
}