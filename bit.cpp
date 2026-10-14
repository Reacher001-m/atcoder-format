#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

void solve(){
    ll a = 50; //110010
    ll b = 55; //110111
    cout << (a&b) << endl; //110010
    cout << (a|b) << endl; //110111
    cout << (a^b) << endl; //000101
    cout << (a<<1) << endl; //1100100
    cout << (b>>1) << endl; //011011
    return;
}

int main(){
    solve();
}