#include <stdio.h>
/*
Zaid Ansar
March 2 2023
Sys Level Programming
Lab 7
*/
int main() {
  char phone_number[15];

  printf("Enter phone number: ");
  scanf("%14s", phone_number);

  int j = 0;

  for (int i = 0; phone_number[i] != '\0'; i++) {
    if (phone_number[i] >= '0' && phone_number[i] <= '9') {
      phone_number[j++] = phone_number[i];
    }
  }

  printf("You entered %c%c%c-%c%c%c-%c%c%c%c\n",
    phone_number[0], phone_number[1], phone_number[2], phone_number[3],
    phone_number[4], phone_number[5], phone_number[6], phone_number[7],
    phone_number[8], phone_number[9]);

  return 0;
}