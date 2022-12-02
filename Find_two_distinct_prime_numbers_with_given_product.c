#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int flage=1;
    for(int i=0;i<n;i++){
        if(prime(i)){
            if(n%i==0){
                int num=n/i;
                if(prime(num)){
                    flage=0;
                    cout<<i<<" "<<num;
                    break;
                }
            }
        }
    }
    if(flage)
    cout<<"-1"<<endl;
}