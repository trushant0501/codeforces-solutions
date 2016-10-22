#include <iostream>
#include<numeric>
using namespace std;
// Hacked 
int main() {
    // your code goes here
    int x,y,i;
    cin>>x;
    long long xx[x],n;
    n=0;
    for(i=0;i<x;i++){
        cin>>xx[i];
        n+=xx[i];
        xx[i]=n;
    }
    cin>>y;
    long long yy[y];
    
    for(i=0;i<y;i++){
        cin>>yy[i];
        
    if(yy[i]<xx[0])
            cout<<"1"<<endl;
    else{
    for(n=1;n<x;n++){
        if(yy[i]<=xx[n]){
            cout<<n+1<<endl;
        break;
        }
    }}
    }
    

    return 0;
}
