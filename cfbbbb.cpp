#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d;
    cin>>d;
    int ar[d];
    int ll = -1;
    int x, xx;
    for( int i = 0; i<d; i++ ){
        cin>>ar[i];
        if(ar[i]>ll)
        {
            ll = ar[i];
        }
    }
    //int ar2[d];
    int y = 0;
    for( int f = 1; f<=sqrt(ll); f++){
             x = 0;
             xx = 0;
        if(ll%f == 0 ){
            int nn = ll/f;
            bool fl = false;
            bool fl2 = false;
            for( int s = 0; s<d; s++ ){
                if(ar[s] == f && fl==false){
                    ar[s] = 0;
                    fl = true;
                    x++;
                }
                if(ar[s] == nn && fl2==false){
                    ar[s] = 0;
                    fl2 = true;
                    xx++;
                }
            }
        }
    }
    int xxx = (x+xx);
    int xxxx = (d-xxx);
    int ar2[xxxx];
    int vv = 0;
    for( int j = 0; j<d; j++ ){
        if(ar[j]!=0){
            ar2[vv] = ar[j];
            vv++;
        }
    }
    //for( int jj =0; jj<vv; jj++){
       // cout<<ar2[jj]<<endl;
    //}
    sort(ar2,ar2+vv);
    cout<<ll<<" "<<ar2[vv-1]<<endl;
    return 0;
}
