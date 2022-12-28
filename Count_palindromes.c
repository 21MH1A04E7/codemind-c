#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int num=n;
    int sum=0;
    while(num){
        int r=num%10;
        sum=sum*10+r;
        num/=10;
    }
    //cout<<sum<<endl;
    //cout<<n<<endl;
    if(sum==n)
    return true;
    return false;
}
int main(){
    int n,c=0;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(palindrome(arr[i]))
        c++;
    }
    cout<<c<<endl;
    delete arr;
}
