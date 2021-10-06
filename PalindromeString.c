
#include <stdio.h>
#include <string.h>

int isPalindrome(char S[])
{
    // Your code goes here
    int l=strlen(S)-1;
    int s=0;
    int ct=0;
    while(s<=l)
    {
        if(S[s]==S[l])
        {
            ct=1;
        }
        else {
        ct=0;
        break;}
    s++;
    l--;
    }
    return ct;
}

int main() 
{
   	int t;
   	scanf("%d", &t);
   	while(t--)
   	{
   		char s[100000];
   		scanf("%s", s);


   		printf("%d\n", isPalindrome(s));
   	}

    return 0;
}
