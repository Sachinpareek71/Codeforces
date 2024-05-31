/*
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    char sign;

    cin>>a>>sign>>b;

    if(sign == '+'){
        cout<<a+b<<endl;
    }else if(sign == '-'){
        cout<<a-b<<endl;
    }else if(sign == '*'){
        cout<<a*b<<endl;
    }else{
        cout<<a/b<<endl;
    }
    return 0;
}