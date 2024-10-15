#include <stdio.h>
#include <stdbool.h>
int main(){
  char vowelArr[5] = {'a','e','i','o','u'};
    char letter;
    bool isVowel=false ;
    scanf("%c",&letter);
    for(int i = 0; i < 5; i++){
        if(letter == vowelArr[i]){
            printf("Vowel");
            isVowel = true;
            break;
        }
    }
    if(isVowel==false){
        printf("Consonant");
    }

    return 0;
}