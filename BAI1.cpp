#include<bits/stdc++.h>

using namespace std;


int main(){
    
    int t; cin >> t;

    while(t--){
        int cnt = 0;
        int n; cin >> n;

        vector<int> a(n);
        
        for(int i = 0; i < n; i++) cin >> a[i];

        int cntchan = 0, cntle = 0;
        for(int i=0;i<n;i++){
            if((a[i] % 2) != (i % 2)){
                if(i % 2 == 0) cntchan++; 
                else cntle++;          
            }
            }
        if(cntchan != cntle) cout << -1 << '\n';


        else cout << cntchan << '\n';
        
    
    }
    
}