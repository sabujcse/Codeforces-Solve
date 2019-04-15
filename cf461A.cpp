/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*       HACKERRANK    return_SSP                 *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      string                  S;
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   f;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      cn     cin
#define      ct     cout
#define      en     endl
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq; /***priorty_queue function***/
void  permutation(string ss)
{
    sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));
}
int  main()
{
    /*
    int n;
    sc("%d",&n);
    int ii = 0;
    int jj = 0;
    int kk = 0;
    int k = 0;
    long long  count = 0;
    for( int i = 1; i<=n; i++){
    for( int j = i+1; j<=n; j++ ){
        //for( int k = j+1; k<=n; k++ ){
                //cout<<i<<j<<k<<endl;
                k=j+1;
            if( i<=n && j<=n&& k<=n ){
                 ii = i;
                 jj = j;
                 kk = k;
                 int a = ii;
                 int b = jj;
                 int c = kk;
                if((ii^jj^kk) == 0){

                  // pf("%d%d%d\n",a,b,c);
                    if(a+b !=c && a+c !=b && c+b !=a ){
                        count++;
                    }
                    ii =0;
                    jj = 0;
                    kk =0;

                }
          //  }
       // }
    }
   }
}
   cout<<count<<endl;
*/
   int n, t;
   long long count = 0;
   cin>>n;
   for( int i = 1; i<=n; i++ ){
    for( int j = i; j<=n; j++ ){
        t = (i^j);
        if( t >= j && t <= n && (i+j)!=t && (i+t)!=j &&(j+t!=t))count++;
    }
   }
   cout<<count<<endl;
    return 0;
}


