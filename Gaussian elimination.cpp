#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pr printf
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
const int Mod = 1e6+3;

int norm(int a) {
    a %= Mod;
    a = (a + Mod) % Mod;
    return a;
}

int mul(int a, int b) {
    return int(a * 1LL * b % Mod);
}

int power(int a, int k) {
    int res = 1;
    while (k > 0) {
        if (k & 1) res = mul(res, a);
        a = mul(a, a);
        k /= 2;
    }
    return res;
}

int inv(int a) {
    return power(a, Mod-2);
}

main() {
    //freopen("aa.inp","r",stdin);
    //freopen("aa.out","w",stdout);
    int k = 10;
    vector<int> f(k+1, 0);
    For(i,0,10)
    {
        cout << "? " << i << endl;
        cout.flush();
        cin >> f[i];
    }
    vector<vector<int>> tab(k+1, vector<int> (k+2, 0));
    For(i,0,k)
    {
        tab[i][0] = 1;
        tab[i][k+1] = f[i];
        For(j,1,k)
            tab[i][j] = mul(tab[i][j-1], i);
    }
    For(j,0,k)
    {
        int tmp = -1;
        For(i,j,k)
            if (tab[i][j] != 0)
            {
                tmp = i;
                break;
            }
        if (tmp == -1) continue;
        swap(tab[tmp], tab[j]);
        For(i,0,k)
        {
            if (i == j) continue;
            int cm = mul(tab[i][j], inv(tab[j][j]));
            For(h,0,k+1)
                tab[i][h] = norm(tab[i][h] - mul(tab[j][h], cm));
        }
    }
    vector<int> a(k+1, 0);
    For(i,0,k)
    {
        if (tab[i][i] == 0) continue;
        a[i] = mul(tab[i][k+1], inv(tab[i][i]));
    }
    For(x,0,Mod-1)
    {
        int val = 0;
        Ford(i,k,0)
            val = norm(mul(val,x) + a[i]);
        if (val == 0)
        {
            cout << "! " << x << endl;
            return 0;
        }
    }
    cout << "! -1" << endl;
    return 0;
}
