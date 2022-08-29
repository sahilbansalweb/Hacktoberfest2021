#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define bool short
#define true 1
#define false 0
#define TAMLINHA 1000
#define NUMENTRADA 1000

bool isEnd(char *s){
    return (strlen(s) >= 3 && s[0] == 'E' && s[1] == 'N' && s[2] == 'D');
}

/*
*The code verifies recursively if a input string is a palindrome
*@param s input string
*@param i int counter used to traverse the string
*@return resp bool <true> if input string is a palindrome <false> if it's not
*/
bool isPalindrome(char *s, int i){
    bool resp;
    int j = strlen(s) - i - 2;
    if(i > ((int)strlen(s)/2)){
        resp = true;
    }else{
        if(s[i] != s[j]){
            resp = false;
        }else{
            resp = isPalindrome(s, i+1);
        }//fim if
    }//fim if

    return resp;
}

int main(){
    char input[NUMENTRADA][TAMLINHA];
    int inputCounter = 0;
    bool resp;

    //The input ends with the string 'END'
    do{
        fgets(input[inputCounter], TAMLINHA, stdin);
    }while(isEnd(input[inputCounter++]) == false);
    inputCounter--;

    for(int i = 0; i < inputCounter; i++){
        resp = isPalindrome(input[i], 0);
        if(resp){
            printf("YES\n");
        }else{
            printf("NO\n");
        }//fim if
    }//fim for i
    return 0;
}
