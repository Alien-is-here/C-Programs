#include<stdio.h>

void decimal_to_binary ( int num) {
    int binary[32];
    int i = 0;
    
    while(num > 0) {
        binary[i] = num %2;
        num = num / 2;
        i++;
    }
    printf("Binary Value is : ");
   for(int j = i - 1; j >= 0; j--){
     
       printf("%d " , binary[j]);
   }
}

void decimal_to_octal ( int num) {
    int octal[32];
    int i = 0;
    
    while(num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("\nOctal Value is : ");
   for(int j = i - 1; j >= 0; j--){
     
       printf("%d " , octal[j]);
   }
}

void decimal_to_hex ( int num) {
    char hexa[32];
    int i = 0;
    int rem ;
    while(num > 0) {
        rem = num % 16;
        if (rem < 10)
            hexa[i] = rem + '0';
        else
            hexa[i] = (rem - 10 )  +'A';
    i++;
    num = num / 16;
          
    }
    printf("\nHexa Value is : ");
   for(int j = i - 1; j >= 0; j--){
       printf("%c " , hexa[j]);
   }
}
int main() {
    int num;
    printf("Enter Number : ");
    scanf("%d" , &num);
    
    if (num == 0)
        {
             printf("Entered Number is : 0 ");
            return 0;
        }
    decimal_to_binary(num);
    decimal_to_octal(num);
    decimal_to_hex(num); 
  return 0;
}
