#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,c=0;
    
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            c+=i;
        }
        
    }
    if(c==n){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    return 0;
}