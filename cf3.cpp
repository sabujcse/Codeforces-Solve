#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int rt[x];
    for( int i = 0; i<x; i++ ){
        cin>>rt[i];
    }
    sort(rt,rt+x);
     int ll = 0;
    for( int i = 0; i<x; i+=2 ){
        int j = i;
        //if(i==0){
         ll += (rt[j+1]-rt[i]);

    }
    cout<<ll<<endl;
    return 0;
}
