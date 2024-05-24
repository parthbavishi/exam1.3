//writa a C program that defain a function to reverse a 3 bigit numbar

#include <stdio.h>


int reverseThreeDigitNumber(int num) {
   
    if (num < 100 || num > 999) {
        printf("Error: The number is not a three-digit number.\n");
        return -1;
    }

  
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    
    int reversedNum = ones * 100 + tens * 10 + hundreds;
    
    return reversedNum;
}

int main() {
    int number;

  
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    
    
    int reversedNumber = reverseThreeDigitNumber(number);

   
    if (reversedNumber != -1) {
        printf("Reversed number: %d\n", reversedNumber);
    }

   
}
