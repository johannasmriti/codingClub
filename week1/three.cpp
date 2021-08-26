/*Palinddrome
input: binary number format
* can change number k times
n numbers in the string
find if palindrome is possible
eg:
input : 
2 //testcases
3 1 //n and k
001  //binary number
2 0  
01
output:
YES
NO*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=s.size()-1,flag=0;
        while(i<n/2){
            if(s[i]!=s[j]){
                k--;
            }
            i++;
            j--;
            if(k==-1){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
