/* 


You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings.

You have to find out the minimum number of operations to make all 3 strings same.

Input Format

The input will contain 3 Strings.

Constraints

1 <= Length of each string <= 100

Output Format

Print an integer, the minimum number of operations to make the strings same.


 */


#include<stdio.h>
#include<string.h>
int main(){


    char a[100] , b[100],c[100];
    scanf("%s %s %s",a,b,c);

    int string_len = strlen(a);
    int totalOperations = 0;

    for(int i = 0; i < string_len; i++){
        if(a[i] != b[i]){
          b[i] = a[i];
            totalOperations++;
        }
        if(a[i] != c[i]){
            c[i] = a[i];
            totalOperations++;
        }
    }

    printf("%d",totalOperations);
    return 0;

}