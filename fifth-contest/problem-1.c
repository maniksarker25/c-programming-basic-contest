/*

He got interested with that. He now is playing with numbers, He will take a number N and write the numbers from 1 to N in increasing order and then again to 1 in decreasing order.

For example for N = 3 he will write, 1 2 3 2 1.

Now you will be given a number N, and you have to print the numbers he will write.

Input Format

The input will contain an Integer T, the number of test cases.
Each test cases will contain an integer N.
Constraints

1 <= T <= 10
1 <= N <= 1000
Output Format

For each case print the numbers that babul will write.




 */


// #include<stdio.h>


// int main(){

//     int t;
//     scanf("%d",&t);
//     printf("%d\n",t);
//     for(int i = 0; i < t; i++){
//         int n;
//         scanf("%d",&n);

//         for(int i = 1;i<=n;i++){
//             printf("%d ",i);
//             if(i ==n){
//                 for(int j = n -1;j>=1;j--){
//                     printf("%d ",j);
//                 }
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }




// solve using recursion function


#include <stdio.h>


void printPattern(int n, int currentNum) {
    if (currentNum == n) {
        printf("%d ", currentNum);
        return;
    }


    printf("%d ", currentNum);
    printPattern(n, currentNum + 1);
    printf("%d ", currentNum);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n); 
        printPattern(n, 1);
        printf("\n");
    }

    return 0;
}
