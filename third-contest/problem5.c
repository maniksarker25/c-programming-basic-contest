    // #include<stdio.h>
    // #include<string.h>

    // int main(){
    //     char S1[1001],S2[1001],S3[1001];

    //     scanf("%s %s %s",S1,S2,S3);

    //     if(strcmp(S1,S2) <=0 && strcmp(S1,S3) <=0 ){
    //         printf("%s\n",S1);

    //         if(strcmp(S2,S3)>=0){
    //             printf("%s\n",S2);  
    //         }
    //         else{
    //             printf("%s\n",S3);
    //         }
    //     }
    //     if(strcmp(S2,S3) <=0 && strcmp(S2,S1) <=0 ){
    //         printf("%s\n",S2);

    //         if(strcmp(S1,S3)>=0){
    //             printf("%s\n",S1);
    //         }
    //         else{
    //             printf("%s\n",S3);
    //         }
    //     }
    //     if(strcmp(S3,S1) <=0 && strcmp(S3,S2) <=0 ){
    //         printf("%s\n",S3);

    //         if(strcmp(S1,S2)>=0){
    //             printf("%s\n",S1);
    //         }
    //         else{
    //             printf("%s\n",S2);
    //         }
    //     }

    //     return 0;


    // }



#include<stdio.h>
#include<string.h>

int main(){
    char S1[1001], S2[1001], S3[1001];


    scanf("%s %s %s", S1, S2, S3);


    if(strcmp(S1, S2) <= 0 && strcmp(S1, S3) <= 0) {
        printf("%s\n", S1);  


        if(strcmp(S2, S3) >= 0) {
            printf("%s\n", S2); 
        } else {
            printf("%s\n", S3);  
        }

    } else if(strcmp(S2, S3) <= 0 && strcmp(S2, S1) <= 0) {
        printf("%s\n", S2); 

   
        if(strcmp(S1, S3) >= 0) {
            printf("%s\n", S1); 
        } else {
            printf("%s\n", S3);
        }


    } else {
        printf("%s\n", S3); 


        if(strcmp(S1, S2) >= 0) {
            printf("%s\n", S1);  
        } else {
            printf("%s\n", S2);  
        }
    }

    return 0;
}


