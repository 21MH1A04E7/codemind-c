#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int* arr=new int[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%k==0)
        count++;
    }
    cout<<count<<endl;
    delete arr;
}