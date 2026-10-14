
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;


void solve(){
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    vector<ll> sum(n+1, 0);

    rep(i,n){
        sum[i+1] = sum[i] + a[i];
    }

    rep(i,q){
        int l, r;
        cin >> l >> r;

        // 1-indexedで[l, r]の区間和
        cout << sum[r] - sum[l-1] << endl;
    }
}


int main(){
    solve();
}