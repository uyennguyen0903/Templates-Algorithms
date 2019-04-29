#include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pr printf
#define pb push_back
#define mp make_pair

#define ll long long
#define ld long double

typedef pair <int , int> pii;
typedef pair <ll , ll> pll;
typedef pair <ld , ld> pdd;
#define X first
#define Y second

#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Ford(i,a,b) for(int i=(a); i>=(b); i--)
#define sqr(z) ((z)*(z))
#define all(x) x.begin(),x.end()
#define ms(s,n) memset(s,n,sizeof(s))
/************************************************************/

int numbit(int x) { return (1 << x) - 1; }
int getbit(int x, int i) { return (x >> i) & 1; }
int onbit(int x, int i) { return x | (1 << i); }
int offbit(int x, int i) { return x & (~(1 << i)); }

/************************************************************/

const int maxInt = 1000000009;
const int Nmax = 5001;

/************************************************************/

main(){
    //freopen("1.inp","r",stdin);
    //freopen("1.out","w",stdout);
    int N;
    ll p,q,b;
    sc("%d",&N);
    For(i,1,N)
    {
        sc("%lld%lld%lld",&p,&q,&b);
        if (p % q == 0) pr("Finite\n"); else{
        q /= __gcd(p,q);
        b = __gcd(q,b);
        while (b != 1)
        {
            while (q % b == 0) q /= b;
            b = __gcd(q,b);
        }
        if (q == 1) pr("Finite\n"); else pr("Infinite\n");}
    }
}
