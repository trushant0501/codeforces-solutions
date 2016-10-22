#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int arr[x];
    for(int i =0; i<x;i++){
        int y;
        cin>>y;
        arr[y-1]=i+1;
    }
    for(int i =0;i<x-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[x-1]<<endl;
    return 0;
}
