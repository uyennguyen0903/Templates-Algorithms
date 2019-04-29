 #include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pr printf
#define pb push_back
#define mp make_pair
#define ins insert

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

ll numbit(ll x) { return (1LL << x) - 1LL; }
ll getbit(ll x, ll i) { return (x >> i) & 1LL; }
ll onbit(ll x, ll i) { return x | (1LL << i); }
ll offbit(ll x, ll i) { return x & (~(1LL << i)); }

/************************************************************/

const ll maxLL = 1000000000000000001;
const ll maxInt = 1820000009;
const int Nmax = 5000010;

/************************************************************/
int res,N,xx,p1[200001],p2[200001],base,b[200001];

void update(int x)
{
    for(int i=x;i<=200001;i+= i&(-i))
        b[i]++;
}

int get(int x)
{
    int ans = 0;
    for(int i=x;i>0;i-=i&(-i))
        ans+=b[i];
    return ans;
}

main(){
    //freopen("ProbB.in","r",stdin);
    //freopen("ProbB.out","w",stdout);
    cin >> N;
    For(i,1,N)
    {
        cin >> xx;
        p1[xx] = i;
    }
    res = 0;
    base = 100000007;
    For(j,1,N)
    {
        cin >> xx;
        res = (res + (j-1-get(p1[xx]-1))) % base;
        update(p1[xx]);
    }

    cout << res;
    return 0;
    
}