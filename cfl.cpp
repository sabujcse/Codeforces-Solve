#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 10002
int M[MAX];

void initializer()
{
    for( int i = 0; i<MAX; i++ )M[i] = NIL;

}

int main()
{
    long long int x;
    cin>>x;
    long long int xx[x];
    long long int xxx[x-1];
    long long int xxxx[x-2];
    long long int rt = 0;
    long long int rtt = 0;
    long long int rttt = 0;
    for( int i = 0; i<x; i++ ){
        cin>>xx[i];
        rt+=xx[i];
    }
    for( int i = 0; i<x-1; i++ ){
        cin>>xxx[i];
        rtt+=xxx[i];
    }

    for( int i = 0; i<x-2; i++ ){
        cin>>xxxx[i];
        rttt+=xxxx[i];
    }
    cout<<rt-rtt<<endl;
    cout<<rtt-rttt<<endl;
    return 0;
}
