#include <stdio.h>
#include <unistd.h>

int main() {
  while(1) { // Infinite Loop
    printf("This program is running...\n");
    sleep(1);
    char ch;
    printf("Press 'q' to quit or any other key to continue: ");
    scanf(" %c", &ch); // I don't fully understand, but if it receives multiple characters, it prints the above statement for every character received. I believe this is because it's running the loop and accepts them all as separate inputs. 
     if (ch == 'q') {
      break;
      }
     }
  printf("Program exited.\n");
  return 0;
}
