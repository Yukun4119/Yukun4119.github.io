#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(int len, string str){
    int curSum = 1;
    cout << 1 << " ";
    for(int i = 1; i < len; i++){
        if(str[i] > str[i - 1])
        {
            curSum++;
        }
        else{
            curSum = 1;
        }
        cout << curSum << " ";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int i = 1;
    while(t--){
        int len;
        string str;
        cin >> len >> str;
        cout << "Case #" << i++ << ": ";
        solve(len, str);
        cout << endl;
    }
}