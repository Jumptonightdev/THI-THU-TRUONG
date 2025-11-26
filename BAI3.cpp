#include<bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define UwU int main()
const int MAX_N = 1e6 + 6;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


UwU {
    //freopen("BAI1.INP", "r",stdin);
    //freopen("BAI1.OUT", "w",stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector<int> a(n);
        map<int, int> mp;
        for(int i =0 ;i  < n;i ++){
            cin >> a[i];
        }


        vector<bool> used(n +2 , false);

        bool ok = true;

        used[a[0]] =    true;

        for(int i = 1; i < n && ok; i ++){

            int x = a[i];

            int l = used[x-1];
            int r = used[x+1];

            if(!(l||r)) ok = false;

            used[x] = true;
        }

        if(ok) cout << "YES\n";

        else cout << "NO\n";
        
    }
    

    return 0;
}






