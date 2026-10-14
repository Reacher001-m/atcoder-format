#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

using ll = long long;
using pii = pair<int,int>;

//bit探索とは、各要素を選ぶ選ばないの2択をを二進数で表現する方法
//(1<<n)は、1をn解左へシフトすること
//if(bit & (1<<i))はたとえば、1101と0001を＆回路を動かしている。この時は、0001となり1番目を選んでいる

void solve(){
    int n = 4;
    vector<int> a = {3,5,8,2};

    for(int bit=0; bit<(1<<n); bit++){

        cout << "{ ";

        for(int i=0;i<n;i++){
            if(bit & (1<<i)){
                cout << a[i] << " ";
            }
        }

        cout << "}\n";
    }

    return;
}

int main(){
    solve();
}