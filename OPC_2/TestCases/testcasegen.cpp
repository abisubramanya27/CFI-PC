#include<bits/stdc++.h>
#define RAND(x,y) ((x) + (rand()%(y-x+1)))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull LRAND(ull x,ull y) {
    ull R = (((ull) rand() <<  0) & 0x000000000000FFFFull) |
            (((ull) rand() << 16) & 0x00000000FFFF0000ull) |
            (((ull) rand() << 32) & 0x0000FFFF00000000ull) |
            (((ull) rand() << 48) & 0xFFFF000000000000ull);
    return ((x) + (R%(y-x+1)));
}

int main() {
    srand(time(NULL));
    FILE* fp;
    string flname = "inputs/input-";
    for(int i = 1;i <= 8;i++){
        fp = freopen((flname+to_string(i)+".txt").c_str(),"w",stdout);
        int T = RAND(1,100000);
        cout<<T<<endl;
        while(T--) {
            cout<<LRAND(1,1e9)<<endl;
        }
        fclose(fp);
    }
    return 0;
}
