#include<iostream>
int f(int n)
{
    if(n==0||n==1){
        return 1;
    }
    else if(n>2){
       return f(n-1)+f(n-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%f",(f(n)*1.0)/f(n-1));

    return 0;
}