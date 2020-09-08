#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Input string:\n");
    gets(s);

    int length = strlen(s);
    if (length % 2 != 0) {
        for (int i = length / 2; i < length - 1; i++)
            s[i] = s[i + 1];
        s[length - 1] = '\0';
    }
    puts(s);

    return 0;
}
