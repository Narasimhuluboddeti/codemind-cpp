#include <iostream>
using namespace std;
int main(){
    int n,t,s,r;
    s=0;
    cin>>n;
    t=n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}