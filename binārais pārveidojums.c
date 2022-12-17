#include <stdio.h>

int main(void) {
  // Mainīgo deklarēšana
  int number;

  // Liek lietotājam ievadīt naturālu skaitli
  printf("Lūdzu ievadi naturālu skaitli: ");
  scanf("%d", &number);

  // Naturālais skaitlis tiek pārveidots uz bināro skaitli
  char binary[8];
  for (int i = 7; i >= 0; i--) {
    binary[i] = (number & 1) + '0';
    number >>= 1;
  }

  // Tiek parādīts binārais skaitlis
  printf("The binary code is: %s\n", binary);

  return 0;
}
