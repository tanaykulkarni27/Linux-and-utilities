#include<bits/stdc++.h>
using namespace std;
#define int int64_t
void ppl(char i){ cerr<<i<<" , ";}
void ppl(string i){ cerr<<i<<" , ";}
void ppl(float i){ cerr<<i<<" , ";}
void ppl(int i){ cerr<<i<<" , ";}
void ppl(double i){ cerr<<i<<" , ";}
void ppl(){cerr<<"\n";};
template<typename x> void ppl(const x &t){ cerr<<"{ ";for(auto i : t){ ppl(i);}cerr<<" } , ";}
template<typename x,typename y> void ppl(const pair<x,y>&t){cerr<<"{ ";ppl(t.first);cerr<<" , ";ppl(t.second);cerr<<" } , ";}
template<typename x,typename... y> void ppl(x a,y... b){ppl(a);ppl(b...);}
#define dbg(...) cerr<<"DEBUG : "<<#__VA_ARGS__<<" => "
void testcase(){
    puts("");
}
signed main(){
    int tt;
    cin>>tt;
    int cc = 1;
    while(tt--){
        printf("Case #%ld: ",cc);
        testcase();
        cc++;
    }
}

void testcase(){
    puts("");
}
signed main(){
	std::cout << std::fixed;
    std::cout << std::setprecision(9);
    int tt;
    cin>>tt;
    int cc = 1;
    while(tt--){
        printf("Case #%ld: ",cc);
        testcase();
        cc++;
    }
}
