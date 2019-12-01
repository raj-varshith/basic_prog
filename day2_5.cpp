#include<iostream>

int is_prime(int n)
{
    scanf("%d",&n);
    int i, a=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            a=0;
            break;
        }
    }return a;
}
int main()
{
    int n;
    if(is_prime(n)){
     printf("it's prime");
    }
}