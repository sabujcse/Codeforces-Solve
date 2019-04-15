#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for( int i = 0; i<n; i++){
        cin>>x[i];
    }
    int r = 0;
    if(n==3){
        if(x[0] == 1 && x[1] == 0 && x[2] == 1){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    else{

        for( int i = 1; i<n; i++ ){
            int j = i;
            if(x[j-1] == 1 && x[j] == 0 && x[j+1] == 1){
                x[j+1] = 0;
                r++;
            }
        }
       cout<<r<<endl;
    }

    return 0;
}
