
/*
Abul is angry, last time he went to eat with Babul and Bablu, he had to pay more than them as the bill was not divisible by three.

Now he wants to know which numbers from 1 to N is divisible by 3. Also he has 2 more friends so in case they all 5 go to eat some where, he needs to know which numbers from 1 to N are divisible by 5 as well.

He knows you are a programmer, so he wants your help. He will tell you a number N, you have tell him which numbers are divisible by 3 or 5 from 1 to N.
 */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    return 0;
}