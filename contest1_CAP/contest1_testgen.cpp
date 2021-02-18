#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<random>

using namespace std;

int main() {
    string flname = "Test_Case_";
    FILE *fp;
    srand(time(NULL));
    /*Seed*/
    std::random_device rd;

    /* Random number generator */
    std::default_random_engine generator(rd());

    /* Distribution on which to apply the generator */
    std::uniform_int_distribution<long long unsigned> distribution(0,0xFFFFFFFFFFFFFFFF);

    for(int i = 1;i <= 7;i++){
        flname += char(i+'0');
        fp = freopen(flname.c_str(),"w",stdout);
        int no_test = rand()%1000+1;
        cout<<no_test<<"\n";
        for(int j = 1;j <= no_test;j++){
            cout<<distribution(generator)%(200000)+1<<"\n";
        }
        flname.pop_back();
        fclose(fp);
    }
}
