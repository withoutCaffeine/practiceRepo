#include <stdio.h>  

int main() {
int myNumbers[] = {25, 50, 75, 100}; // Must all be same type
int i;
for (i=0;i<4;i++) {
  printf("%d\n",myNumbers[i]);
}
printf("%lu", sizeof(myNumbers));
return 0;
}
