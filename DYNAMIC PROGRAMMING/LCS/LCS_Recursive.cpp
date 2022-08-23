#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
string a, b, p;
const int N = 1005;
int lena, lenb, dp[N][N];
int LCS(int l, int r){
    if(l>=lena || r>=lenb) return 0;

    int& ret = dp[l][r];
    if(ret!=-1) return ret;

    if(a[l]==b[r]){
        ret = 1 + LCS(l+1,r+1);  ///It's a match
    }else{
        ret = max(LCS(l, r+1), LCS(l+1, r));  ///try both criteria
    }

    return ret;
}
void printLCS(int l, int r){
    if(l>=lena || r>=lenb){
        cout<<p<<"\n";
        return;
    }
    if(a[l]==b[r]){
        p += a[l];
        printLCS(l+1, r+1);  ///it's a match and add with my answer
    }else{
        if(dp[l][r+1]>dp[l+1][r]) printLCS(l, r+1);  ///which has more match
        else printLCS(l+1, r);
    }
}
int main(){
    a = "abcdhwoene", b = "bcdaabdhksjkoejkfdne";
    lena = a.size(), lenb = b.size();
    memset(dp, -1, sizeof dp);
    cout<<LCS(0,0)<<endl;
    printLCS(0,0);
    return 0;
}