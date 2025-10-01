#include <stdio.h>
#include <unistd.h>

int main() {
    int minutes, seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    printf("Minutes Entered are: %d\n", minutes);
    seconds = minutes * 60;
    printf("Seconds are: %d\n", seconds);

	printf("Stopwatch Started\n");
	printf("  M:   S\n");
    printf("  ------- -------\n");
	for(int i=0; i< minutes ;i++){
		for(int j=0; j< 60 ;j++)
		{	
		
		 printf("%02d : %02d\n", i, j);
            fflush(stdout);
             sleep(1);
		
		}
		
		printf("Stopwatch finished!\n");
		return 0;
	}
	
}
