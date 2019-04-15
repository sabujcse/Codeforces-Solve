#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int x, y;
    int tc;
    cin>>tc;
    for( int i = 0; i<tc; i++ ){
    cin>>x>>y;
    string s = "";
    bool fg = false;
    while(s.size()<x){
     for( int j = 0; j<y; j++ ){
          s+=ch[j];
          if(s.size()==x){
            fg = true;
            break;
          }
     }
     if(fg){
        break;
     }
    }
    cout<<s<<endl;
    }
    return 0;
}
