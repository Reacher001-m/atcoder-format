#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

void solve(){
    //文字列ではstringを使う
    string n;
    cin >> n;
    //文字列で指定した箇所に文字を追加
    n.insert(0,1,'x') //場所 個数 入れる文字
    //末尾に追加
    n.push_back('x')
    n += 'x';
    //文字の変更
    n[0] = 'a';
    // int型の数字の桁数を調べる
    ll x  =1e9;
    ll a = to_string(x).size();
    //文字列の指定した要素一のものを削除
    string s = "abcde";
    s.erase(2, 1); //2削除開始位置、1削除する文字数
    return;
}

int main(){
    solve();
}