#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

// 入力例
// 5 4
// 1 2
// 1 3
// 2 4
// 3 5


void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);

    rep(i,m){
        int a, b;
        cin >> a >> b;
        --a; --b;

        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> q;

    dist[0] = 0;
    q.push(0);

    while(!q.empty()){
        int v = q.front();
        q.pop();

        for(int nv : g[v]){
            if(dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            q.push(nv);
        }
    }

    rep(i,n){
        cout << dist[i] << endl;
    }
}

int main(){
    solve();
}