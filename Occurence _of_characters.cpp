#include <stdio.h>

int main(void) {
    char *str = "go to the hell";
    int freq[256] = {0};
    int unique = 0;
    int i = 0;
    unsigned char ch;

    while (str[i] != '\0') {
       ch  = str[i];

        if (freq[ch] == 0) {
            unique++;
        }
        freq[ch]++;

        i++;
    }
    printf("Character frequencies:\n");

    for(int i =0 ; i < 256; i++) {
        if(freq[i]>0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
    printf("Number of unique characters: %d\n", unique);

    return 0;
}
