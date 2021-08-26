/* encoding a string
c --> a
d --> b

special symbols:
" " == " "
"@" == " Rescuee "
"." == " Terminate "
":)" == " Guard "
":|" == " Retreat "
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> result;
    //const char *a[5] = {" ","@",".",";)",":|"};
    //vector<string> b{" Rescue "," Terminate "," Guard "," Retreat "};
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            cout<<" ";
        }
        else if(s[i]=='@'){
            cout<<" Rescue ";
        }
        else if(s[i]=='.'){
            cout<<" Terminate ";
        }
        else if(s[i]==':'){
            i++;
            if(s[i]==')'){
                cout<<" Guard ";
            }
            else{
                cout<<" Retreat ";
            }
        }
        else{
            cout<<char(s[i]-2);
        }
    }
}
