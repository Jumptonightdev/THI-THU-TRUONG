#include<bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define UwU int main()
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
int n;
vector<int> a(MAX_N);
int memo[51][101];

int tran(int prev){return prev + 1;}

bool dp(int i , int prev){
    if(i == n) return true;

    int si = tran(prev);

    int res = memo[i][si];

    if(res != -1) return res;

    res = 0;
    int x = a[i];
    if(x < 10){
        if(x >= prev)   res += dp(i +1 , x);
    }
    
    else{
        if(x >= prev) res += dp(i+1, x);

        int d1 = x/10;
        int d2 = x % 10;

        if(d1 >= prev && d2 >= d1){
            if(dp(i+1, d2)) res = 1;
        }
    }
    return res;
}
UwU {
    //freopen("BAI2.INP", "r",stdin);
    //freopen("BAI2.OUT", "w",stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    

    int t; cin >> t;

    while(t--){
        cin >> n;

        a.assign(n, 0);

        for(int i=0;i<n;i++) cin >> a[i];
        
        for(int i=0;i<=n;i++) for(int j=0;j<=101;j++) memo[i][j] = -1;
        bool ok = dp(0, -1);
        if(ok) cout << "YES\n";

        else cout << "NO\n";


    }
    
    

    

    return 0;
}






