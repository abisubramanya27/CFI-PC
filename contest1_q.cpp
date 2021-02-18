#include<iostream>

#define mod 1000000007

using namespace std;

long long ans[200001] = {0};

int main() {
    int T;
    cin>>T;
    ans[0] = 0;
    ans[1] = 1;
    for(int i = 2;i <= 200000;i++){
        ans[i] = (ans[i-1] + ans[i-2])%mod;
    }
    while(T--) {
        int N;
        cin>>N;
        cout<<ans[N]<<endl;
    }
}
