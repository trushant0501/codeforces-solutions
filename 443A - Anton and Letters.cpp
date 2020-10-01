	#include<bits/stdc++.h>
		using namespace std;
		#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
		#include <ext/pb_ds/assoc_container.hpp> 
		#include <ext/pb_ds/tree_policy.hpp> 
		using namespace __gnu_pbds; 
		#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
		 
		#define ff first
		#define ss second
		#define mp make_pair
		 
		#define pb push_back
		#define endl "\n"
		 
		#define int long long int
		#define double long double
		 
		#define bp __builtin_popcountllm
		#define inf 1e16
		const int N=1e5+5;
		const int M=105;
		const int MOD=1e9+7;
 
		
		void solve()
		{	
		   map<int,int> mm;
	       string s;
	       getline(cin,s);
	       int n=s.size();
	       for(int i=1;i<n;i+=3){
	       		if(s[i]>='a' && s[i]<='z')
	       		mm[s[i]-'a']++;
	       }
	       
	       int res=mm.size();
	       cout<<res<<endl;
		}
 
		signed main()  
		{
			FAST
			int t=1;
			//cin>>t;
			while(t--)
			{
				solve();
				
			}
		}
