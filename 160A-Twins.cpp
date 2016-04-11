#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <ext/hash_map>

using namespace std;

int main() {
		vector<int> n;
		int x,i,sum,v=0,c=0;
		cin>>x;
		n.resize(x);
		for ( i = 0; i < x; ++i) {
			cin>>n[i];
		}
		sort(n.rbegin(),n.rend());
		sum=  accumulate(n.begin(),n.end(),0);
		for (i = 0; i < x; ++i) {
			v+=n[i];
			c++;
	        if(v > (sum-v))
	            break;
		}
		cout<<c<<endl;
	    return 0;
}
