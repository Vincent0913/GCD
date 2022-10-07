#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define ff first
#define ss second
#define INF 0x3f3f3f3f
 
int GCD(int a, int b)
{
	if(b == 0) return a;
	
	return GCD(b, a%b);
}
 
void solve()
{
	int a, b, gg;
	cin >> a >> b;
	
	gg = GCD(a, b);
	
	cout << a*b/gg << "\n";
	
	return;
}
 
signed main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--) solve();
	return 0;
}