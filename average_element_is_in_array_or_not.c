#include<iostream>
using namespace std;
int main(){
    int n,flage=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int ave=sum/n;
    for(int i=0;i<n;i++){
        if(ave==arr[i])
        {
            flage=1;
            break;
        }
    }if(flage==1)
    cout<<"True";
    else
    cout<<"False";
}