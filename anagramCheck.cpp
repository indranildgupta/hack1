#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str1,str2;
    cin>>str1>>str2;
    unordered_map<char,int> mp1,mp2;
    int i;
    bool flag=true;
    for(i=0;i<str1.length();i++){
        mp1[str1[i]]++;
    }
    for(i=0;i<str2.length();i++){
        mp2[str2[i]]++;
    }
    for(auto x: mp1){
        if(x.second!=mp2[x.first]){
            flag=false;
            break;
        }
    }
    if(!flag) cout<<"NOT ANAGRAM!!!";
    else cout<<"ANAGRAM!!!";
    return 0;
}
