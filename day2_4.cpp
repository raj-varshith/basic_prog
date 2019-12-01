#include<iostream>
int main()
{
   int n,i;
   scanf("%d",&n);
   int flag=1;
   for(i=2;i<n;i++){
       if(n%i==0){
           flag=0;
       }
       
   }
   if(flag=0){
       printf("composite");

   }else{
       printf("prime");
   }
return 0;
}