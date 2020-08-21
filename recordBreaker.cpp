#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, n) FOR(i, 0, (n))
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
typedef vector<ll> vl;
#define PB push_back
#define ios() ios::sync_with_stdio(false); cin.tie(0);
#define scan(a,n) for(ll i=0;i<n;i++)	cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)	cout<<a[i]<<"\n";
#define test() ll t; cin>>t; while(t--) 
#define endl "\n"
#define debug(n) cout<<n<<endl; 


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll loop=0;
	test()
	{
		loop++;
		ll n, uniq=0,count=0;
		cin>>n;
		ll ar[n+1];
		scan(ar,n);
		map<int,int> mp;
		mp[0]=ar[0];

		REP(i,n)
		{
			if(ar[i] == ar[0])	uniq++;
			if((mp.rbegin()->second) < ar[i])
				mp[i]=ar[i];
		}

		for(auto i=mp.begin(); i!=mp.end(); i++)
		{
			if(i->first == n-1)
				count++;
			else if(ar[i->first + 1] < i->second)
				count++;
		}
		cout<<"Case #"<<loop<<": "<<count<<endl;
		// for(auto i=mp.begin(); i!=mp.end(); i++)
		// 	cout<<i->second<<" ";
		// cout<<endl;
	}
	return 0;
}


/*
ll dp[n+1]={0};
		dp[0]=0;

		vl veczer;
		veczer.push_back(0);
		FOR(i,1,n)
		{
			// debug(i)
			if(dp[i-1] == 1)
			{
				// debug(i)
				dp[i]=1;
			}
			else
			{
				// debug(i);
				ll c=0;
				for(auto j=veczer.begin(); j!=veczer.end(); j++)
					if(ar[*j] < ar[i])
						c++;
				if(c == veczer.size())
					dp[i]=1;
				else
				{
					// debug(i);
					dp[i]=0;
					veczer.push_back(i);
				}
			}
		}
		dp[0]=1;
		REP(i,n)	if(dp[i]==1)	cout<<ar[i]<<" ";

		// for(auto i=veczer.begin(); i!=veczer.end();i++)	cout<<*i<<" ";
		// cout<<veczer.size()<<endl;
		cout<<endl;
*/