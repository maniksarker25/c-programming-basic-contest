#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    int candidates[n + 1];

    for(int i=0; i<n; i++){
        scanf("%d",&candidates[i]);
    }

    for(int i=0; i<n; i++){
        if(candidates[i]<1){
            printf("Entry-level candidate");
        }else if (candidates[i]>=1 && candidates[i]<=3)
        {
           printf("Junior candidate");
        }
        else if(candidates[i]>=4 && candidates[i]<=7){
            printf("Mid-level candidate");
        }
        else if(candidates[i]>7){
            printf("Senior candidate");
        }
        printf("\n");
    }
    return 0;
}