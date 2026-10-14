#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

// 入力例；
// 4 13
// 2 8 5 7
// 出力：
// Yes

// 入力例：
// 4 6
// 2 8 5 7
// 出力：
// No

void solve(){
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    //bit<(1<<n)はbitを2^n回まで繰り返す。bitは10進数でnは2進数だから2^nの10進数に変えている。
    for(int bit = 0; bit<(1<<n); bit++){
        int sum = 0;
        //iをn桁目まで繰り返す。iは2進数。
        for(int i = 0; i < n; i++){
            //bitは10進数なんだけど(1<<i)で比較するときは2進数表記になっている？！
            // 解説
            // bitは常に整数（10進数として扱う変数）だけど、ビット演算 (&, |, ^, << など) をするときは、その整数の内部の2進数表現に対して演算が行われる。
            if(bit & (1<<i)){
                sum += a[i];
            }
        }
        if(sum == x){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main(){
    solve();
}