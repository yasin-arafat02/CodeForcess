#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--) {
       int a,b,c;cin>>a>>b>>c;
       if (a+b==c)cout<<"+";
       else cout<<"-";
       cout<<endl;
    }
    return 0;
}