/*
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int num = n;
    int rev = 0;
    while(n>0){
        rev = rev*10+n%10;
        n/=10;
    }
    cout<<rev<<endl;
    if(num==rev){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}