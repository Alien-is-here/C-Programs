#include <stdio.h>

int main(void) {
    char *str = "go to the hell";
    int freq[256] = {0};
    int unique = 0;
    int i = 0;

    while (str[i] != '\0') {
        unsigned char ch = str[i];

        if (freq[ch] == 0) {
            freq[ch] = 1;
            unique++;
        }

        i++;
    }

    printf("Number of unique characters: %d\n", unique);
    
    return 0;
}
