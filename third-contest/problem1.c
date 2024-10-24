// You will be given two positive integer N and K. You need to print from 1 to K, and you need to do this N times.


#include<stdio.h>


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}