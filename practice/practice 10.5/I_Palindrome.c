#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int i, len;
    int is_palindrome = 1; // assume string is palindrome initially
    
    scanf("%s", str); // read input string
    
    len = strlen(str);
    for(i=0; i<len/2; i++) {
        if(str[i] != str[len-i-1]) {
            is_palindrome = 0; // if mismatch found, string is not palindrome
            break;
        }
    }
    
    if(is_palindrome) {
        printf("YES\n"); // if string is palindrome
    } else {
        printf("NO\n"); // if string is not palindrome
    }
    
    return 0;
}
