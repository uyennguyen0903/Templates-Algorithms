ll numbit(ll x) { return (1LL << x) - 1LL; }
ll getbit(ll x, ll i) { return (x >> i) & 1LL; }
ll onbit(ll x, ll i) { return x | (1LL << i); }
ll offbit(ll x, ll i) { return x & (~(1LL << i)); }
int newMaskNULL(int mask, int m) { return (mask << 1) % (1 << m); }
int newMask(int mask, int m) { return ((mask << 1) % (1 << m)) | 1; }
#define pcInt(n) __builtin_popcount(n)    //count how many 1 in n-binary
#define pcLL(n) __builtin_popcountll(n)

interger a < 2^30 and K=15:
a1 = (a >> K);    //get the first 15 bits of a
a2 = a ^ (a1 << K);  //get the last 15 bits of a

combine two numbers :
ll res = (ll(x1) << K) ^ x2;