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

 bool  perfect_squre_check( long long  number)
 {
     if( number ==1 || number ==-1 ){return false;}
     else{bool flag = false;bool flag2 = false;
     if( number < 0 ){number = (-1)*number;flag = true;}
     for( long long  i = 1; i<= sqrt(number); i++ ){
          if( i*i == number ){flag2 = true;break;}if( i*i > number ){break;}}
     if( flag == true ){if( flag2 == true ){return true;}else{return false;}}
     else{if(flag2 == true){return true;}
        else{return false;}}}
 }
int  main()
{

   /**
    long long  n;
    long long   x;
    cn>>n;
    bool  flag = false;
    bool flag2 = false;
    long long    max_re = -9999999999;
    long long    min_de = 99999999999;
    long long    min_re = 99999999999;
    for( int i = 1; i<=n; i++ ){
        cn>>x;
        long long  fff = x;
        if( fff!=0 ){
        bool ff = perfect_squre_check(fff);
        if(ff){

            flag2 = true;
        }
        if(!ff){
            max_re = max(max_re,x);
            flag = true;
        }
        if(flag==false){
            min_de = min(min_de,fff);
        }
        }
        min_re = min(min_re,fff);
    }
    /**
    5
    918375 169764 598796 76602 538757
    3
    -1 1 0
    **/
    /**
    if(flag2==false){
        cout<<min_re<<endl;
    }
    ***/
    /**
    if( flag )
    cout<<max_re<<endl;
    else{
        cout<<min_de<<endl;
    }
   **/
     int  n;
     long long m_result = -1000000;
      vector<long long >vc;

    int tc;
    cn>>tc;
    for(  int  i = 0; i<tc; i++ ){
        cn>>n;
        vc.push_back(n);
    }
    for(  int   i = 0; i<tc; i++ ){
        if( (double)(sqrt(vc[i]))!= (long int)(sqrt(vc[i]))){

            m_result = max(m_result,vc[i]);
        }
        }

    cout<<m_result<<endl;
    return 0;
}

