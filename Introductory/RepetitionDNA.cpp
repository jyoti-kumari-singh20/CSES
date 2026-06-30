#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long ans=0;
    long long cnt=0;
    for(int i=0;i<s.size();i++){
        if(i>0 && s[i-1]==s[i]){
            cnt++;
        }else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout << ans << "\n";
    return 0;
}