#include<iostream>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    for(int i=1;i<=m;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}