#include<iostream>
int main()
{
    int i,m,j;
    scanf("%d",&m);
    int arr[m][m];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }   
    }
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
            if(j == m-1) printf("\n");
        }   
    }


   return 0;
}
