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


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n, curr=1, count=1;
	cin>>n;
	vl ar(n+1);
	scan(ar,n)
	
	FOR(i,1,n)
	{
		if((ar[i]%2==0 && ar[i-1]%2!=0) || (ar[i]%2!=0 && ar[i-1]%2==0))
		{
			curr++;
			count = max(curr,count);
		}
		else
			curr=1;
	}

	cout<<count<<endl;
	return 0;
}


// ll n, flag=0, count=1;
// 	cin>>n;
// 	vl ar(n+1);
// 	scan(ar,n)
// 	if(ar[0]%2==0)
// 		flag=1;
// 	FOR(i,1,n)
// 	{
// 		if(flag==1)
// 		{
// 			if(ar[i]%2 == 0)
// 				count=1;
// 			else
// 			{
// 				count++;
// 				flag=0;
// 			}z
// 		}
// 		else
// 		{
// 			if(ar[i]%2 != 0)
// 				count=1;
// 			else
// 			{
// 				count++;
// 				flag=1;
// 			}
// 		}
// 	}
// 	cout<<count<<endl;