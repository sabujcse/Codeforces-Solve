#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int ar[x];
    int ar2[x];
    cin>>x;
    for( int i = 0; i<x; i++ ){
        cin>>ar[i];
    }
    sort(ar,ar+x);
    int y = x;
    int ll = ar[y-1];
    int ff = ll;
    for( int j = 1; j<=(ll/2)+1; j++ ){

        if(ff%j == 0 ){
                int gg = ff/j;
                bool flag = false;
                bool flag2 =  false;
         for(int k = 0; k<x; k++){
               if(ar[k]== j && ar[k]!=0 && flag== false){
                  ar[k] = 0;
                  flag = true;

               }
              if(ar[k] == gg && ar[k]!=0 && flag2 == false){
                   ar[k] = 0;
                   flag2 = true;
               }
         }
        }
    }
    int c  = 0;
    for( int n = 0; n<x; n++){
        if(ar[n]!=0){
            ar2[c] = ar[n];
            cout<<ar2[c]<<endl;
            c++;
        }
    }
    sort(ar2,ar2+c);
    cout<<ff<<" "<<ar2[c-1]<<endl;
    return 0;
}
