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

int fibonacci( int n )
{
    if(n<=1)return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int GCD( int a, int b){
    if(b==0) return a;else return GCD(b,a%b);
}
int LCM( int a, int b)
{
    return b = (a*b)/GCD(a,b);
}
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
 int nCr_recurtion( int n , int r )
 {
     if( r==0||r==n)return 1;
     else return nCr_recurtion(n-1,r-1)+nCr_recurtion(n-1,r);
 }
 int nCr_n_complex( int n , int r)
{
    int nr = (n-r);
    int a_n[n],a_r[r],a_nr[nr];
    for( int i = 1; i<=n; i++ )  a_n[i] = i;
    for( int j = 1; j<=r; j++ )  a_r[j] = j;
    for( int k = 1; k<=nr;k++ )  a_nr[k] = k;
    for( int i = 2; i<=nr; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_nr[i]== 0 && (a_n[j]!=1 && a_nr[i]!=1) ){
                if(a_n[j] == a_nr[i]){a_n[j] = 1;a_nr[i] = 1;}
                else{a_n[j] = a_n[j]/a_nr[i];a_nr[i] = 1;}}}}
   for( int i = 2; i<=r; i++ ){
        for( int j = 2; j<=n; j++ ){
            if( a_n[j]%a_r[i]== 0 && (a_n[j]!=1 && a_r[i]!=1) ){
                    if(a_n[j] == a_r[i]){a_n[j] = 1;a_r[i] = 1;
                }
                else{a_n[j] = a_n[j]/a_r[i];a_r[i] = 1;}}}}
    int mul1 = 1;int mul2 = 1;int mul3 = 1;
    for( int i = 2; i<=n; i++ )mul1 = mul1*a_n[i];
    for( int j = 2; j<=nr; j++ )mul2 = mul2*a_nr[j];
    for( int k = 2; k<=r; k++ )mul3 = mul3*a_r[k];
    return mul1*mul2*mul3;

}
int  main()
{
            int n;
            cin>>n;
            int student_good[n];
            int count_one = 0;
            int count_two = 0;
            int count_three = 0;
            for ( int i = 0; i<n; i++)
            {
                cin>>student_good[i];
                if(student_good[i] == 1)
                {
                    count_one++;
                }
                else if (student_good[i] == 2 )
                {
                    count_two++;
                }
                else if (student_good[i] == 3 )
                {
                    count_three++;
                }
            }
            int min_result = min(count_one, min(count_two, count_three));
            bool flag = true;
            if (min_result == 0)
            {
                pf("%d\n",min_result);
                //Console.WriteLine(min_result);
                flag = false;
            }
            else
            {
                pf("%d\n",min_result);
                //Console.WriteLine(min_result);
            }
            int onpo = 0;
            int twopo = 0;
            int threepo = 0;
            int xxxx = 0;
            if (flag==true)
            {
                int xx_one_two_three_count = 0;
                for(int i = 0; i<=n/2; i++)
                {
                    bool one_flag = false;
                    bool two_flag = false;
                    bool three_flag = false;
                    for ( int j = 0; j<n; j++)
                    {
                        if(student_good[j] == 1 && one_flag == false)
                        {
                            xx_one_two_three_count++;
                            onpo = j;
                            onpo++;
                            one_flag = true;
                            student_good[j] = 0;
                        }
                        else if (student_good[j] == 2 && two_flag == false)
                        {
                            xx_one_two_three_count++;
                            twopo = j;
                            twopo++;
                            two_flag = true;
                            student_good[j] = 0;
                        }
                        else if (student_good[j] == 3 && three_flag == false)
                        {
                            xx_one_two_three_count++;
                            threepo = j;
                            threepo++;
                            three_flag = true;
                            student_good[j] = 0;
                        }

                        if( xx_one_two_three_count == 3)
                        {
                            pf("%d %d %d\n",onpo,twopo,threepo);
                            //Console.WriteLine(onpo+" "+twopo+" "+threepo);
                            xxxx++;
                            onpo = 0;
                            twopo = 0;
                            threepo = 0;
                            xx_one_two_three_count = 0;
                        }
                        if (xxxx == min_result)
                        {
                            break;
                        }
                    }
                    if (xxxx == min_result)
                    {
                        break;
                    }
                }
            }



    return 0;
}


