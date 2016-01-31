#include <iostream>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include <cstdlib>
#include<cstring>
#include<string>

using namespace std;

int main() {

            string y;
            bool c=false;
            cin>>y;
            for (int i = 0; i < y.length()&&c==false; i++) {
                switch (y[i]) {
                case 'H':
                    c=true;
                    break;
                case '+':
                    c=false;
                    break;
                case 'Q':
                    c=true;
                    break;
                case '9':
                    c=true;
                    break;
                default:
                    break;
                }
            }
            if(c)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        return 0;
}
