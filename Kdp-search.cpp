#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

// 入力例
// 3 5
// 6 2
// 10 3
// 12 4


void solve(){
    int n, w;
    cin >> n >> w;

    vector<pair<int,int>> s(n);
    rep(i,n){
        cin >> s[i].first >> s[i].second;
        // first = 価値、second = 重さ
    }

    vector<ll> dp(w+1, 0);

    for(int i=0; i<n; i++){
        int x = s[i].first;
        int y = s[i].second;

        for(int j=w; j>=y; j--){
            dp[j] = max(dp[j], dp[j-y] + x);
        }
    }

    cout << dp[w] << endl;
}


int main(){
    solve();
}