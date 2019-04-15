#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    vector<int>ax;
    for( int i = 0; i<n; i++ ){
        cin>>ar[i];
    }
    //int dd = ar[0];
    // ax.push_back(dd);
    int c = 0;
    int arr[n];
    for( int i = 0; i<n; i++ ){
        bool flag = true;
        for( int j = 0; j<ax.size(); j++){
            if(ax[j]==ar[i]){
                flag = false;
            }
        }
        if(flag == true){
                arr[c] = ar[i];
            ax.push_back(ar[i]);
            c++;
        }
    }
    cout<<ax.size()<<endl;
    for(int g = 0; g<ax.size(); g++ ){
            if(g == ( ax.size()-1)){
                printf("%d\n",arr[g]);
            }
            else
             printf("%d ",arr[g]);
    }
    return 0;
}


