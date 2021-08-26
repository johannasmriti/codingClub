// You are using GCC
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> result;
    vector<string> a{" ","@",".",";)",":|"};
    vector<string> b{" Rescue "," Terminate "," Guard "," Retreat "};
    for(int i=0;i<s.size();i++){
        if(s[i]==a[0]){
            result.push_back(b[0]);
        }
        else if(s[i]==a[1]){
            result.push_back(b[1]);
        }
        else if(s[i]==a[2]){
            result.push_back(b[2]);
        }
        else if(s[i]==a[3]){
            result.push_back(b[3]);
        }
        else if(s[i]==a[4]){
            result.push_back(b[4]);
        }
        else{
            result.push_back(s[i]-2);
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
