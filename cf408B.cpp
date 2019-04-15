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
#define      Angle  360
#define      AN     180
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      MIN(a,b) ((a) < (b) ? (a) : (b))
#define      MAX(a,b) ((a) > (b) ? (a) : (b))
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq; /***priorty_queue function***/
struct compare
{
   bool operator()(const int& I , const int& r)
   {
       return I > r;
   }
};

int main()
{

    long long int n, m, k;
    bool flag1 = false;
    bool flag2 = false;
    cin>>n>>m>>k;
    int hol[10000];
    int cube[10000];
    int vx, vy;
    long long int final_position = 0;
    for( int j = 1; j<=m; j++ ){
        cin>>hol[j];
    }
    long long int ans1 = 0;
    long long int ans2 = 0;
    bool flag_marker = true;
    for( int l = 1; l<=k; l++ ){
        cin>>vx>>vy;
        for( int h = 1; h<=m && flag_marker; h++ ){
            if( hol[h] == vx || hol[h] == vy ){
                if( hol[h] == vx ){
                   flag1 = true;
                   ans1 = vx;
                   flag_marker = false;
                   break;
                }
                else if(hol[h] == vy ){
                    flag2 = true;
                    ans2 = vy;
                    flag_marker = false;
                    break;
                }
            }
            else if(flag1 == false && flag2 == false){

            swap(cube[vx],cube[vy]);
            final_position = vy;
        }
        }
        if( (flag1||flag2) && l==k ){
            break;
        }

    }
    if(flag1){
        cout<<ans1<<endl;
    }
    else if(flag2){
       cout<<ans2<<endl;
    }
    else{
    cout<<vy<<endl;
    }
    return 0;
}
