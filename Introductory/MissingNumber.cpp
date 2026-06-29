#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long x=1;
    long long ans=0;
    for(int i=1;i<n;i++){
        int a;
        cin >> a;
        ans=ans xor (x xor a);
        x++;
    }
    ans=ans xor x;
    cout << ans << "\n";
    return 0;
}