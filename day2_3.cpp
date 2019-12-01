#include <iostream>
int main()
{
    //reciprocal sum
    float n,i=1; 
    n=1/i; 
    for(;i<100;i++){
        n=n+1/(i+1);
        
    }
    printf("%f",n);
    return 0;
}