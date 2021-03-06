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
#define      priority_queue<int,vector<int>,compare>pq;
#define      N 100000
int prime[N];
void  permutation(string ss)
{sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));}

I Bigmod( I b , lli p, I m )
{if( p== 0 ){return 1;}
    if( p % 2 == 0 )
    {lli re = Bigmod( b, p/2, m );return ( re*re )%m;}
    else if( p%2 == 1 ){lli p1 = b%m;lli p2 = Bigmod( b, p-1, m );return ( p1 * p2 )%m;}}

void Sieve_of_Eratosthenes()
{   for( int i = 2; i<=N; i++){prime[i] = 1;}
    prime[0] = prime[1] = 0;
    int root = sqrt(N);
    for( int i = 2; i<=root; i++ ){
    for( int j = i*i; j<=N; j+=i ){if(prime[j]){prime[j] = 0;}}}}



int  main()
{
    string s;
    cin>>s;
    int pos = 0;
    int res,x;
    int ll = 0;
    if(s.size()==1){
         if(s[0]=='A' || s[0] =='E' || s[0] =='I' || s[0] == 'O' || s[0] == 'U' || s[0] == 'Y' ){
            pf("1\n");
         }
         else{
            pf("2\n");
         }
    }
    else{
            bool flag = false;
    for( int i = 0; i<s.size(); i++ ){

        if(s[i]=='A' || s[i] =='E' || s[i] =='I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' ){

            flag = true;
             x = i;
            //pf("x = %d\n",x);
            res =  (x+1) - pos;
            //pf("pos = %d\n",res);
            pos = x;
            if( res > ll){
                ll = res;
               // pf("ll = %d\n",ll);
            }
        }
    }
    int xx = s.size();
    int xxx = (xx-x);
    if(flag==true){
            int yy = (ll-1);
       int yyy = max(yy,xxx);
       if(yyy==44 || yyy==34){
        cout<<yyy+1<<endl;
       }
       else
    cout<<yyy<<endl;
    }
    else{
        pf("%d\n",s.size()+1);
    }
    }
    return 0;
}
