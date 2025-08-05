#include <stdio.h>
#include <unistd.h> 

int main() {
    int M;
    printf("Enter Minutes: ");
    scanf("%d", &M);
    printf("\t M: \t S");
    for (int i = 0 ; i < M ; i++) {
        for(int j = 0; j< 60 ; j++) {
            sleep(1);
            printf("\r\t%02d : \t%02d", i , j);
            fflush(stdout); 
        }
    }
    return 0;
}
