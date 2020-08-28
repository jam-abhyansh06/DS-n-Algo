#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
#define REP(i, n) FOR(i, 0, (n))
#define FOR(i, a, b) for(int i=(a); i<(b); i++)
typedef vector<ll> vl;
#define PB push_back
#define ios() ios::sync_with_stdio(false); cin.tie(0);
#define scan(a,n) for(ll i=0;i<n;i++)	cin>>a[i];
#define print(a,n) for(ll i=0;i<n;i++)	cout<<a[i]<<" ";
#define test() ll t; cin>>t; while(t--) 
#define endl "\n"


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n,q;
	cin>>n;
	vl ar(n+1);
	scan(ar,n)
	cin>>q;
	vector<string> que(q+1);
	while(q--)
	{
		// cout<<"yes\n";
		string str;
		cin>>str;
		if(str == "Left")
		{
			ll temp=ar[0];
			FOR(i,0,n-1)	ar[i]=ar[i+1];
			ar[n-1]=temp;
			// print(ar,n)
			// cout<<endl;

		}
		else if(str == "Right")
		{
			ll temp=ar[n-1];
			for(ll i=n-1;i>0;i--)	ar[i]=ar[i-1];
			ar[0]=temp;
			// print(ar,n)
			// cout<<endl;
		}
		else if(str == "Update")
		{
			ll pos,val;
			cin>>pos>>val;
			ar[pos+1]=val;
			// print(ar,n)
			// cout<<endl;
		}
		else if(str == "Increment")
		{
			ll pos;
			cin>>pos;
			ar[pos-1]++;
			// print(ar,n)
			// cout<<endl;
		}
		else if(str=="?")
		{
			ll pos;
			cin>>pos;
			cout<<ar[pos-1]<<endl;
		}
	}
	return 0;
}