#include<stdio.h>
#include<string.h>

int main() {
	char month[10];
	int day;
	printf("Enter Month on which you want to check the holiday: ");
	fgets(month, 10, stdin); // fgets (prevents buffer overflow) and reads up to 9 characters plus the `\0` null terminator
	month[strcspn(month, "\n")] = 0; //  Ensuring input like "March\n" becomes "March" for clean string comparison

	printf("Enter Day on which you want to check the holiday: ");
	scanf("%d", &day);
	//printf("%d\n", day);

	if ( !(strcmp(month, "March")) && (day == 30))
        printf("Eid-ul-Fitr Day 1 ");
        
	else if (!(strcmp(month, "March")) && (day == 31))
		printf("Eid-ul-Fitr Day 2\n ");
		
	else if (!(strcmp(month, "May")) && (day == 1))
		printf("Labours day \n");
		
	else if (!(strcmp(month, "May")) && (day == 28))
		printf("Youm-e-Takbeer ");
		
	else if (!(strcmp(month, "August")) && (day == 14))
		printf("Independence Day\n");
		
	else if (!(strcmp(month, "November")) && (day == 9))
		printf("Allama Iqbal Day\n ");
		
	else if (!(strcmp(month, "December")) && (day == 25))
		printf("Quaid-e-Azam Day/Christmas \n");

	else
		printf("NO HOLIDAY \n");
	return 0;
} 
