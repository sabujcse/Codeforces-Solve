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
#define      N 100000

int nCr_n_complex( int n , int r)
{
    int  nr = (n-r);
    int a_n[n],a_r[r],a_nr[nr];

    for( int i = 1; i<=n; i++ )  a_n[i] = i;
    for( int j = 1; j<=r; j++ )  a_r[j] = j;
    for( int k = 1; k<=nr;k++ )  a_nr[k] = k;


    for( int i = 2; i<=nr; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_nr[i]== 0 && (a_n[j]!=1 && a_nr[i]!=1) ){
                if(a_n[j] == a_nr[i]){
                    a_n[j] = 1;
                    a_nr[i] = 1;
                }
                else{

                    a_n[j] = a_n[j]/a_nr[i];
                    a_nr[i] = 1;
                }
            }
        }
    }

   for( int i = 2; i<=r; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_r[i]== 0 && (a_n[j]!=1 && a_r[i]!=1) ){
                if(a_n[j] == a_r[i]){
                    a_n[j] = 1;
                    a_r[i] = 1;
                }
                else{

                    a_n[j] = a_n[j]/a_r[i];
                    a_r[i] = 1;
                }
            }
        }
    }
    unsigned long long int mul1 = 1;
    unsigned long long int mul2 = 1;
    unsigned long long int mul3 = 1;
    for( int i = 2; i<=n; i++ )mul1 = mul1*a_n[i];
    for( int j = 2; j<=nr; j++ )mul2 = mul2*a_nr[j];
    for( int k = 2; k<=r; k++ )mul3 = mul3*a_r[k];
    return mul1*mul2*mul3;

}
int main()
{
    int n, r;
    while(cin>>n>>r)
    cout<<nCr_n_complex(n,r)<<endl;
    return 0;
}

