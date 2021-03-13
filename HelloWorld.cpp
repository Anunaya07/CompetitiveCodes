//Author: thewackyindian
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

#define forn(i,n)	for(ll i=0;i<n;i++)
#define forsn(i,s,n)  	for(ll i=s;i<n;i++)
#define read_arr(a,n) 	for(ll i=0;i<n;i++) cin>>a[i];
#define write_arr(a,n) 	for(ll i=0;i<n;i++) {cout<<a[i]<<" ";} cout<<"\n";
#define prefixsum(pref,a,n) 	pref[0]=a[0];for(ll i=1;i<=n;i++)  {pref[i]=pref[i-1]+a[i];}
#define nl "\n";
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y)  (x*y)/(__gcd(x,y))
ll MOD = 998244353;
double eps = 1e-12;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mem(v,i) memset(v,i,sizeof(v))
#define all(x) x.begin(), x.end()
#define TIME (chrono::steady_clock::now().time_since_epoch().count())

int main()
{
	fast_cin();
	cout<<"Hello World"<<'\n';
	cout<<"I AM RAJ KARAN SINGH"<<'\n';
	return 0;
}

