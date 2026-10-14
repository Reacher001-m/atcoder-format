#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

//2分探索

void solve(){
    int n,q;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
    }
    sort(all(a));
    cin >> q;
    rep(i,q){
        ll x;
        cin >> x;
        int left = 0;
        int right = n;

        while(left < right){
            int mid = (left + right) / 2;
            if(a[mid] < x){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        int pos = left;
        if(pos == 0){
            cout << a[0] - x << '\n';
        }
        else if(pos == n){
            cout << x - a[n-1] << '\n';
        }
        else{
            cout << min(x - a[pos-1], a[pos] - x) << '\n';
        }
    }
}

int main(){
    solve();
}