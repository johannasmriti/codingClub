//142 minutes
/*mirror image time
eg:
9:00 == 3 hours 0 minutes
11:15 == 12 hours 45 minutes*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    char c;
    int x,y;
    cin>>x>>c>>y;
    if(x>12){
        x=x-12;
    }
    x=11-x;
    y=60-y;
    if(y==60){
        y=0;
        x++;
    }
    if(x<=0){
        x=12+x;
    }
    cout<<x<<" hours "<<y<<" minutes"<<endl;
}
