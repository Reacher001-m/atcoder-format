#include <bits/stdc++.h>
#include <numeric> 
#include <functional>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n,1);
    //ここにbit探索を加えてどこからスタートすれば最大値になるか調べる
    for(int bit = 0; bit<(1<<n); bit++){
        int sum = 0;
        for(int k = 0; k<n; k++){
            if(bit&(1<<k)){
                rep(i,n){
                    if(a[i] == 1){
                        //証言の回数
                        int A;
                        cin >> A;
                        //証言の回数分受け取る
                        for(int j = 0; j<A; j++){
                            int x,y;
                            cin >> x >> y;
                            a[x] = y;
                        }
                    }
                }
                sum = max(accumulate(a.begin(), a.end(), 0),sum);
                cout << sum << endl;
            }
        }
    }
    
    //人数分繰り返す
    // rep(i,n){
    //     if(a[i] == 1){
    //         //証言の回数
    //         int A;
    //         cin >> A;
    //         //証言の回数分受け取る
    //         for(int j = 0; j<A; j++){
    //             int x,y;
    //             cin >> x >> y;
    //             a[x] = y;
    //         }
    //     }
    // }
    // sum = max(accumulate(all(a)),sum)

    return;
}

int main(){
    solve();
}