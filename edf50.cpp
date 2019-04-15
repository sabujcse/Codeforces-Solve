
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int sum = 1;
    int n = 100;
    for( int i = 2; i<=100/2; i++ ){
        if(n%i == 0 ){
            sum = sum + i;
        }
    }
    printf("%d\n",sum);
    return 0;
}



