#include<bits/stdc++.h>
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

void swap(ll &a, ll &b)
{
	ll temp=a;
	a=b;
	b=temp;
}

// ll gcd(ll a,ll b)
// {
// 	if(a==b)
// 		return a;
// 	else if(a>b)
// 		return gcd(a-b,a);
// 	else
// 		return gcd(a,b-a);
// }

void reverse(vl &v, ll low, ll high)
{
	while(low<high)		swap(v[low++], v[high--]); // low++;high--;
}

void leftRotate(vl &v, ll n, ll k)
{
	reverse(v, 0, k-1);
	reverse(v, k, n-1);
	reverse(v, 0, n-1);
}


void rightRotate(vl &v, ll n, ll k)
{
	reverse(v, 0, n-1);
	reverse(v, k, n-1);
	reverse(v, 0, k-1);
}


int main()
{
	#ifndef ONLINE_JUDGE
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	#endif
	ios()
	ll n, k;
	cin>>n>>k;
	vl v(n+1);
	scan(v,n)
	// leftRotate(v,n,k);
	rightRotate(v,n,k);	
	print(v,n);

	return 0;
}



// REP(i,n)
// 	{
// 		ll temp = v[i];
// 		v[i] = v[(i+k)%n];
// 		v[(i+k)%n] =temp;
// 	}