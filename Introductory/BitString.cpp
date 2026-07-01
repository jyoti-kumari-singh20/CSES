#include<bits/stdc++.h>
using namespace std;
int main(){
    const long long mod=1e9+7;
    long long n;
    cin >> n;
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans%mod)*2;
    }
    ans%=mod;
    cout << ans << "\n";
    return 0;
}