#include <iostream>
#include <algorithm>
#include<string>
#include<vector>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	char x;
	bool a[26]={0};
	int c=0;
	while(scanf("%c",&x)==1&&x!='\0'&&x!='\n'&&x!='}'){
		if((x!=' '&&x!=','&&x!='{'&&x!='}'&&a[int(tolower(x))-97]!=1)){
			a[int(tolower(x))-97]=1;
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
