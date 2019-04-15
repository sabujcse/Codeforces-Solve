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

int k = 1;
#define MAX_SIZE 101
int boy_team[MAX_SIZE];
int girl_team[MAX_SIZE];
int  main()
{
    int number_of_boy;
    int number_of_girl;
    cn>>number_of_boy;
    for( int i = 0; i<number_of_boy; i++ ){
        cn>>boy_team[i];
    }
    cn>>number_of_girl;
    for( int i = 0; i<number_of_girl; i++ ){
        cn>>girl_team[i];
    }
    sort(boy_team,boy_team+number_of_boy);
    sort(girl_team,girl_team+number_of_girl);
     /*
    int count = 0;
    int max_result = 0;
    for( int i = 0; i<number_of_boy; i++ ){
        for( int j = 0; j<number_of_girl; j++ ){
                int xx = max(boy_team[i],girl_team[j]);
                int yy = min(boy_team[i],girl_team[j]);
             if(  (xx-yy)==1){
                count++;
             }
        }
        max_result = max(max_result,count);
        count = 0;
    }
    cout<<max_result<<endl;
    */
    int count = 0;
    for( int i = 0, j = 0; i<number_of_boy && j<number_of_girl;){

        if(boy_team[i]-1>girl_team[j]) j++;
        else if(boy_team[i]<girl_team[j]-1) i++;
            else count++, i++, j++;
    }
    cout<<count<<endl;
    return 0;
}


