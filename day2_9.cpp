#include<iostream>
int fun(int n)
{
    if(n%2==0){
        return n/2;
    }else if(n==1){
        return 1;
    }
    else{
        return 3*n+1;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(;n>=1;n=fun(n)){
        printf("%d\n",fun(n));
    }
    return 0;
}