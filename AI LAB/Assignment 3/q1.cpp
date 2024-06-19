#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
using namespace std;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pr;
typedef vector<pair<int,int> > vpr;
#define ff first
#define ss second
#define rep(n) for(int i = 0; i < n; i++)
#define repj(n) for(int j = 0; j < n; j++)
#define repk(n) for(int k = 0; k < n; k++)
#define fort(i,m,n) for(int i=m;i<n;i++)
#define fortj(j,m,n) for(int j=m;j<n;j++)
#define fora(arr,n) for(int i=0;i<n;i++) cin>>arr[i]
#define begud(k) cerr<<"\t-->"<<#k<<" = "<<k<<"\n";
#define endl "\n"
#define pb push_back
#define debug(args...) { string _debug_list = #args; replace(_debug_list.begin(), _debug_list.end(), ',', ' '); stringstream _debug_stream(_debug_list); istream_iterator<string> __it(_debug_stream); debug_func(__it, args); }
void debug_func(istream_iterator<string> _it) {
	cerr << "\n";
}
template <typename T, typename... Args>
void debug_func(istream_iterator<string> _it, T x, Args... args) {
	cerr << "[ " << *_it << " : " << x << " ]";
	cerr << " , ";
	debug_func(++_it, args...);
}
const int mod = 998244353;
ll power(ll a,ll b)
{
	if(b==0)
		return 1;
	ll res = power(a,b/2);
	ll ans = res*res;
    ans %= mod;
	if(b%2==0)
		return ans;
	return (a*ans)%mod;
}
bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.second > b.second);
}
 
int fact(int n){
    if(n == 1 || n == 0)
        return 1;
    int ans = ((n % mod) * (fact(n - 1) % mod)) % mod;
    return ans;
}
 
bool compare(const pair<int, int> &p1, const pair<int, int> &p2){
    return p1.ff > p2.ff;
}

void solve(){
    int n, k = -1; // Size of the array
    cout << "Enter number of digits: ";
    cin >> n;
    vi a(n);
    cout << "Enter number: ";
    fora(a, n);
    for(int i = n - 2; i >=0; i--){
        if(a[i + 1] > a[i]){
            k = i;
            break;
        }
    
    }
    if(k == -1){
        cout << "Highest number only\n";
        return;
    }
    int l = INT_MAX, m = -1;
    fort(i, k + 1, n){
        if(a[i] > a[k]){
            l = min(l, a[i]);
            if(l == a[i]){
                m = i;
            }

        }
    }
    swap(a[k], a[m]);
    sort(a.begin() + k + 1, a.end());
    rep(n){
        cout << a[i];
    }
    cout << endl;
    
}
int32_t main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--){
        solve();
    }
}