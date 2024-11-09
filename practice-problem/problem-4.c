/*

Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

 */

#include <stdio.h>
#include <string.h>

int vowel_count(char s[], int length, int count)
{
    if (length == 0)
    {
        return count;
    }
    char ch = s[length - 1];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        count++;
    }

    vowel_count(s, length - 1, count);
}

int main()
{
    char s[200];

    scanf(" %[^\n]", s);

    int length = strlen(s);
    int count = 0;
    count = vowel_count(s, length, count);
    printf("%d", count);
    return 0;
}