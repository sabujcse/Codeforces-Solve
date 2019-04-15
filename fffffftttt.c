#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if(b>a){

        swap(a,b);
    }
    printf("sum = %d ",(a+b));
    printf("div = %d ",(a-b));
    printf("mul = %d ",(a*b));
    printf("divv = %d ",(a/b));
    printf("rem  = %d ",(a%b));
    return 0;
}
