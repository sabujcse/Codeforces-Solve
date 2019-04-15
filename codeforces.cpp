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
int  main()
{
    /**
   int a, b, c;
   bool flag0 = false;
   bool flag1 = false;
   bool flag2 = false;
   sc("%d%d%d",&a,&b,&c);
   if(c%a==0||c%b==0){
         flag0 = true;
     }
    else
    {
   int x = abs(c-a);
   if( x%b == 0  || x == 0 ){
        flag1 = true;
   }
   int xx = abs(c-b);
   if(xx%a == 0 || xx == 0 ){
    flag2 = true;
   }
   if(flag1||flag2){
    pf("Yes\n");
   }
   else{
    pf("No");
   }
    }
    if(flag0){
        pf("Yes\n");
    }
    **/
    int a, b, c;
    cin>>a>>b>>c;
    for( int i = 0; i<=c; i+=a ){
        if((c-i)%b==0){
            pf("Yes\n");
            return 0;
        }
    }
    pf("No\n");
    return 0;
}

