#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int s4c = 0, s7c = 0;
    for( int i = 0; i<s.size(); i++ ){
        if(s[i] == '4'){
            s4c++;
        }
        else if(s[i] == '7'){
            s7c++;
        }
    }
    if(s4c==0&&s7c==0){
        cout<<"-1"<<endl;
    }
    else{
        if(s4c==s7c){
            cout<<"4"<<endl;
        }
        else{
            int re = max(s4c,s7c);
            if(re==s4c){
                cout<<"4"<<endl;
            }
            else{
                cout<<"7"<<endl;
            }
        }
    }
    return 0;
}
