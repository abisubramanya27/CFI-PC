#include<iostream>
#include<time.h>

#define mod 1000000007

using namespace std;

long long ans[200001] = {0};

int main() {
    string in_name = "Test_Case_",out_name = "Output_";
    FILE *fpin,*fpout,*temp;
    ans[0] = 0;
    ans[1] = 1;
    for(int i = 2;i <= 200000;i++){
        ans[i] = (ans[i-1] + ans[i-2])%mod;
    }
    for(int i = 1;i <= 7;i++){
        in_name += char(i+'0');
        out_name += char(i+'0');
        fpin = freopen(in_name.c_str(),"r",stdin);
        fpout = freopen(out_name.c_str(),"w",stdout);
        int T;
        cin>>T;
        while(T--) {
            int N;
            cin>>N;
            cout<<ans[N]<<"\n";
        }
        in_name.pop_back();
        out_name.pop_back();
        fclose(fpin);
        fclose(fpout);
    }
    temp = freopen("../cp/output.txt","w",stdout);
    cout<<"\nTime Elapsed: " << 1.0*clock() / CLOCKS_PER_SEC << " sec"<<endl;
    fclose(temp);
}
