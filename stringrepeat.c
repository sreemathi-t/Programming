#include <stdio.h>

int main() {
    char s[100];            
    scanf("%s", s);        
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) { 
                s[i] = '*';     
                break;
            }
        }
    }
    printf("%s\n", s);    
    return 0;
}
