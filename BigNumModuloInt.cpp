//
inline int mul(int a, int b)
{
	return (a * 1ll * b) % MOD;
}

inline int norm(int a)
{
	while(a >= MOD)
		a -= MOD;
	while(a < 0)
		a += MOD;
	return a;
}

inline int binPow(int a, int k)
{
	int ans = 1;
	while(k > 0)
	{
		if(k & 1)
			ans = mul(ans, a);
		a = mul(a, a);
		k >>= 1;
	}
	return ans;
}

inline int inv(int a)
{
	return binPow(a, MOD - 2);
}