#include <stdio.h>
#include <string.h>

void reverse(char str[], int start , int end)
{
    if(start >= end)
        return;
        
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    reverse(str,start+1, end-1);
}

int main() {
    char s[] = " I love Pakistan";
    int n = strlen(s);
    int i; int start;
    char words[] =" ";
    while (i <= n) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;   // next word starts
        }
        i++;
    }
    printf("Reversed: %s\n", s);

}
