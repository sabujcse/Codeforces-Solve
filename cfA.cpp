#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc;
    scanf("%d",&tc);
    while(tc--){
        int x, y, z;
        //cin>>x>>y>>z;
        scanf("%d%d%d",&x,&y,&z);
        if(x>z){
                bool flag = true;
            if(z==1 && x!=1){

                printf("1\n");
            }
            else if(z==1 && z==1){
                printf("%d\n",y+1);
            }
            else{
               for( int i = 2; i<=x-1; i++ ){
                if(i%z == 0){
                    flag = false;
                    //cout<<i<<endl;
                    printf("%d\n",i);
                    break;
                }
               }
               if(flag){
                  while(flag){
                  y++;
                  if(y%z== 0 ){
                    //cout<<y<<endl;
                    printf("%d\n",y);
                    flag = false;
                    break;
                }
               }
            }
        }
        }
        else{
                bool flag = true;
                if(y==z){
                    cout<<y*2<<endl;
                }
                else
                while(flag){
                y++;
                if(y%z== 0 ){
                    //cout<<y<<endl;
                    printf("%d\n",y);
                    flag = false;
                    break;
                }
            }
        }
    }
    return 0;
}
