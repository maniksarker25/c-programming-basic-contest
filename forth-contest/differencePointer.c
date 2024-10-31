#include<stdio.h>
#include <stdlib.h> 
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int *x= &a, *y= &b;

    int diff = abs(*x - *y);

    printf("%d\n",diff);

    return 0;
}