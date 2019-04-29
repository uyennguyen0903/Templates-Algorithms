#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define aj insert
#define er erase
#define ll long long
#define ld long double
#define X first
#define Y second
#define For(i,a,b) for(ll i=(a); i<=(b); i++)
#define Ford(i,a,b) for(ll i=(a); i>=(b); i--)
#define sqr(z) ((z)*(z))
#define all(x) x.begin(),x.end()
#define ms(s,n) memset(s,n,sizeof(s))

/************************************************************/

typedef pair <int , int> pii;
typedef pair <ll , ll> pll;
typedef pair <ld , ld> pdd;

/************************************************************/

ll numbit(ll x) { return (1LL << x) - 1LL; }
ll getbit(ll x, ll i) { return (x >> i) & 1LL; }
ll onbit(ll x, ll i) { return x | (1LL << i); }
ll offbit(ll x, ll i) { return x & (~(1LL << i)); }
int newMaskNULL(int mask, int m) { return (mask << 1) % (1 << m); }
int newMask(int mask, int m) { return ((mask << 1) % (1 << m)) | 1; }
#define pcInt(n) __builtin_popcount(n)
#define pcLL(n) __builtin_popcountll(n)

/************************************************************/

const ll Inf64 = 1e18;
const ll Inf = 1e9;
const int Nmax = 1e5+10;
const ll Mod9 = 1e9+9;
const ll Mod7 = 1e9+7;

/************************************************************/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    //freopen("aa.inp","r",stdin);
    //freopen("aa.out","w",stdout);
    
    return 0;
}
