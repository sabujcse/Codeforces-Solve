#include<bits/stdc++.h>
using namespace std;

int main()
{
    /**
     int n;cin>>n;
     int x;bool flag = true;
     for( int i = 0; i<n; i++ ){cin>>x;if(x==1){flag = false;}}
     if(flag){printf("EASY\n");}
     else{printf("HARD\n");}
        **/
        int test;
        cin>>test;
        for( int i = 1; i<=test; i++ ){
      long long int n,nn, nnn, nnnn;
      cin>>n>>nn>>nnn>>nnnn;
      long long int nnnnn = n/nnnn;
      long long int nnnnnn = nnnnn;
      long long int nnnnnnn = nnnnnn/nn;
      long long int nnnnnnnn = nnnnnnn*nnn;
      long long int nnnnnnnnn = nnnnn + nnnnnnnn;

      cout<<nnnnnnnnn<<endl;
        }

     return 0;
}
