#include <iostream>
using namespace std;

int main() {
    // your code goes here
    
    int t,i,j;
    cin>>t;
    int t1= (t/3),t2= (t/3),t3= (t-1)/3;
    if(((t-4)%3==1)&&((t%3)!=0)){
        t1++;
    }else if(((t-4)%3==2)&&((t%3)!=0)){
        t1++;
        t2++;
    }
    cout<<"+------------------------+"<<endl;
    if((t1==0&&t==1)||(t1==0&&t==2)){
        cout<<"|O.#.#.#.#.#.#.#.#.#.#.|D|)"<<endl;}
    else{
        cout<<"|";
        for( j=0;j<t1;j++){
            cout<<"O.";
        }
        for( ;j<11;j++){
            cout<<"#.";
        }
        cout<<"|D|)"<<endl;
    }
        if(t2==0&&t==2){
            cout<<"|O.#.#.#.#.#.#.#.#.#.#.|.|"<<endl;
        }else{
        cout<<"|";
        for( j=0;j<t2;j++){
            cout<<"O.";
        }
        for( ;j<11;j++){
            cout<<"#.";
        }
        cout<<"|.|"<<endl;
        }
        if(t>=3)
        cout<<"|O.......................|"<<endl;
        else
        cout<<"|#.......................|"<<endl;
        
        
        cout<<"|";
        for( j=0;j<t3;j++){
            cout<<"O.";
        }
        for( ;j<11;j++){
            cout<<"#.";
        }
        cout<<"|.|)"<<endl;
        
        
    
    cout<<"+------------------------+"<<endl;
    


    return 0;
}
