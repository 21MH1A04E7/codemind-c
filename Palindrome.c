#include<iostream>
using namespace std;
bool fun(int num){
    int sum=0;
    int temp=num;
    while(num){
        sum=sum*10+num%10;
        num=num/10;
    }
    if(sum==temp)
    return true;
    else
    return false;
}
int main(){
    int n;
    cin>>n;
    if(fun(n)){
        cout<<"True";
    }else{
        cout<<"False";
    }
}