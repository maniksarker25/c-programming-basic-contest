#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int numArr[n];
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&numArr[i]);
    }
    for(int i=0; i<n; i++){
        if(numArr[i]== 0){
            zeroCount += 1;
        }
        else if(numArr[i]== 1){
            oneCount += 1;
        }
    }
    printf("%d %d", zeroCount ,oneCount);
    return 0;
}