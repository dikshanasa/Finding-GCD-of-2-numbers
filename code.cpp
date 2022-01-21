#include<iostream>
using namespace std;

int main(){
    int p, q;
    cin>>p>>q;
    
    while(p!=q){
        if(p>q){
            p=p-q;
        }
        else if(q>p){
            q=q-p;
        }
    }
    cout<<p;
}
