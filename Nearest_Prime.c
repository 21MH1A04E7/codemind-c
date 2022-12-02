#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=0,c2=0,a=n,b=n;
        while(1){
            c1++;
            if(prime(a)){
                break;
            }
            a++;
        }
        while(1){
            c2++;
            b--;
            if(prime(b)){
                break;
            }
        }
        if(c1>=c2){
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }
    }
    
}