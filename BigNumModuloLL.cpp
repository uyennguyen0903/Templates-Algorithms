const ll MOD = 998244353;

inline ll mul(ll a, ll b)
{
	return (a * 1ll * b) % MOD;
}

inline ll norm(ll a)
{
	while(a >= MOD)
		a -= MOD;
	while(a < 0)
		a += MOD;
	return a;
}

inline ll binPow(ll a, ll k)
{
	ll ans = 1;
	while(k > 0)
	{
		if(k & 1)
			ans = mul(ans, a);
		a = mul(a, a);
		k >>= 1;
	}
	return ans;
}

inline ll inv(ll a)
{
	return binPow(a, MOD - 2);
}