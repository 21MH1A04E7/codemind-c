#include<iostream>
#include<math.h>
bool prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
using namespace std;
int main(){
        int n;
        cin>>n;
        int a=n,b=n;
        while(1){
            if(prime(a)){
                break;
            }
            a++;
        }
        while(1){
             b--;
            if(prime(b)){
                break;
            }
        }
    if(prime(n)){
        cout<<"0";
    }else{
        if(abs(n-a)<=abs(n-b)){
            cout<<abs(n-a);
        }else{
            cout<<abs(n-b);
        }
    }
}