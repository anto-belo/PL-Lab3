#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Input string:\n");
    gets(s);

    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        if(length % 2 != 0 && i == length / 2) continue;
        printf("%c", s[i]);
    }
 
    return 0;
}
