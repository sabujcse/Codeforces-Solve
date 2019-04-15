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

  int a, b, c, d,e;
int main()
{

    int x_a, x_b;
    int t_c;
    sc("%d",&t_c);
    int final_passenger = 0;
    int intial_passenger = 0;
    int x,y;
    cin>>x>>y;
    intial_passenger = x;
    final_passenger = y;
    int max_value = 0;
    int c_c = 0;
    for( int i = 2; i<=t_c; i++ ){
        sc("%d%d",&x_a,&x_b);
        final_passenger -= x_a;
        final_passenger = final_passenger + x_b;
        if(final_passenger>max_value){
            max_value = final_passenger;
            c_c++;
        }
    }
    if(y>max_value && c_c ==1 ){

        pf("%d\n",y);
    }
    else if( max_value == 0 ){
        cout<<y<<endl;
    }
    else{
    cout<<max_value<<endl;
    }

    /*
    cin>>a;
    for( int i = 0; i<a; i++ ){
        cin>>b>>c;
        d = d - b +c;
        if( d > e) {
            e = d;
        }
    }
    cout<<e<<endl;
    */
    return 0;
}


