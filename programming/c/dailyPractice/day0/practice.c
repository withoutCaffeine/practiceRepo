#include <stdio.h>

int main() {
  int num=1;
  int input;
 
  printf("Hello World!");

  while (1){
    if (num<10){
      scanf("%d", &input);
      num+=input;
      printf("Youre input: %d\n", input); // Troubleshooting value
      printf("Keep going.., not yet\n");
    } else {
      printf("The game's over!\n");   
      break;
      }
  }
  return 0;
}
