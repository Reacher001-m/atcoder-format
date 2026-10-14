#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;


// 045 C問題

// 入力例
// 125
// 出力
// 176


void dfs(string s, int pos,string z,ll sum){
    if(pos == s.size()){
        cout << sum << "\n";
        return;
    }
    string a = s;
    ll a_sum = sum;
    for(int i = 0; i<z.size()+1; i++){
        a_sum += z[i]*pow(10,i);
    }
    a.insert(pos,1,'+');
    dfs(a,pos+2,"",a_sum);
    dfs(s,pos+1,z+s[pos],sum);
    return;
}

void solve(){
    string s;
    cin >> s;
    string t = s[0];
    dfs(s,1,t,0);
    return;
}

int main(){
    solve();
}