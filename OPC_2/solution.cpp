#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll mod = 1e9+7;

ll mexp(ll num,ll e){
    ll ans = 1;
    while(e>0){
        if(e&1){
            ans = (ans * num)%mod;
        }
        num *= num;
        num %= mod;
        e>>=1;
    }
    return ans%mod;
}

ll modinv(ll a){
    a %= mod;
    return mexp(a,mod-2);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        ll k;
        cin>>k;
        ll ans = ((mexp(3,k+1)-3)%mod + mod)%mod;
        ans = (ans * modinv(2LL))%mod;
        cout<<ans<<endl;
    }
}
