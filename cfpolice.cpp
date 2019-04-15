#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for( int i = 0; i<n; i++ ){
        cin>>x[i];
    }
    int police = 0;
    int r  = 0;
    for( int i = 0; i<n; i++ ){
        if(x[i]>=0){
            police += x[i];
        }
        else{
            if(police==0){
                r++;
            }
            else{
                police += x[i];
            }
        }
    }
    cout<<r<<endl;
    return 0;
}
