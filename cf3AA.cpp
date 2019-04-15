#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    int tc;
    cin>>tc;
    for( int i = 1; i<=tc; i++ ){
    cin>>l1>>r1>>l2>>r2;
    if( (l1==l2)&&(r1==r2)){
        printf("%d %d\n",l1,r2);
    }
    else{
        if(r1!=r2){
            cout<<r1<<" "<<r2<<endl;
        }
        else{
                cout<<r1<<" "<<r2-1<<endl;;
           }
        }
    }
    return 0;
}
