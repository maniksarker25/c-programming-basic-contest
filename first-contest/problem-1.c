/* 

Abul, Babul, and Bablu are three friends. This year Abul got X taka salami, Babul got Y taka salami and Bablu got Z taka salami.

Now the want to know what is the total amount of salami they all got this year.

Can you help them? */

#include<stdio.h>

int main(){
    int x,y,z;
   scanf("%d %d %d",&x,&y,&z);
    int total = x + y + z;
    printf("%d",total);
}