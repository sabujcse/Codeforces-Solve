#include<bits/stdc++.h>
using namespace std;
int main()
{
    /**
    int xx;
    cin>>xx;
    string st[xx];
    for( int i = 0; i<xx; i++ ){
        string ss;
        getline(cin,ss);
        string sss = "";
        bool flag = true;
        for(int j = 0; j<ss.size() && flag; j++ ){
            if(ss[j] != ' '){
                sss+=ss[j];
            }
            else{
                st[i] = sss;
                flag = false;
            }
        }
    }
    set<string>sst;
    for( int i = 0; i<sizeof(st)/sizeof(st[0]); i++ ){
        sst.insert(st[i]);
    }
    map<string , int>msi;
    for( int i = 0; i<sizeof(st)/sizeof(st[0]); i++ ){
            int countr_string = 0;
        for( int j = 0; j<sizeof(st)/sizeof(st[0]); j++ ){
            //string gg = sst[i];
            if(st[i] == st[j]){
                countr_string++;
            }
        }
        msi[st[i]] = countr_string;
    }
    **/
    string st;
    int tc;
    cin>>tc;
    cin.ignore();
    map<string,int>mp;
    while(tc--){
        string country;
        cin>>country;
        string itm;
        getline(cin,itm);
        mp[country]+=1;
    }
    for(map<string , int>::const_iterator it = mp.begin(); it!=mp.end(); it++)
    cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
