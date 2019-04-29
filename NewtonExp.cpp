
int fact[N];
int rfact[N];

void preNewton()
{
    fact[0] = 1;
	for(int i = 1; i < N; i++) fact[i] = mul(fact[i - 1], i);
	for(int i = 0; i < N; i++) rfact[i] = inv(fact[i]);
}

int C(int n, int k)
{
	if(n < 0 || k < 0 || k > n) return 0;
	return mul(fact[n], mul(rfact[k], rfact[n - k]));
}

vector<int> newtonExp(int a, int b, int p)   // pCi*a^i*b^(p-i)
{
	vector<int> res(p + 1);
	for(int i = 0; i <= p; i++)
		res[i] = mul(C(p, i), mul(binPow(a, i), binPow(b, p - i)));
	return res;
}