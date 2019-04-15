#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[6];
    for( int i= 0; i<6; i++ ){
        cin>>x[i];
    }
    int l;
    int r = 0;
    for( int i = 0; i<6; i++ ){
            r = 0;
            bool flage = false;
        for( int j = 0; j<6; j++ ){
            if(x[i] == x[j]){
                r++;
                if(r==4){
                   l = x[i];
                   flage = true;
                }
            }
        }
        if(flage){
            break;
        }
    }
    int ll,lll;
    //cout<<l<<endl;
    if(r>=4 && r<=6 ){
            bool flag1 =  true;
            bool flag2 = true;
            if(r==4){
           for( int k = 0; k<6; k++){
            if(x[k] != l ){
            if(flag1&&flag2){
                    ll = x[k];
                    flag1 = false;
            }
            else if(flag2&&!flag1&&r>=4)
            {
                if(r==4){
                    lll = x[k];
                }
                else{

                    lll = l;
                }
                flag2 = false;

            }
        }
        }
        }
        else if(r==5){
                bool fl = false;
            for( int f = 0; f<6; f++ ){
                if(x[f]!=l){
                    if(f==6-1){
                        lll = x[f];
                        fl = true;
                    }
                    else
                    ll = x[f];
                }
            }
             if(fl){
                ll = l;
             }
             else
            lll = l;
        }
        else{
            ll = l;
            lll = l;
        }
        //cout<<lll;
        if(ll<lll){
            cout<<"Bear"<<endl;
        }
        else{
            cout<<"Elephant"<<endl;
        }

    }
    else{
        cout<<"Alien"<<endl;
    }
    return 0;
}
