/* 

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

 */


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int isUnit = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(i == j){
            if( arr[i][j] != 1){
                isUnit = 0;
                break;
            }
           }
           if(i != j){
            if( arr[i][j] != 0){
                isUnit = 0;
                break;
            }
           }
        }
    }

    if(isUnit == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;

    
}