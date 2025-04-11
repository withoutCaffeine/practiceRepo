#include <stdio.h>

int main() {
  float totalTax;
  int totalTenants;
  float taxPerPerson;

  printf("Enter the bill: \n");
  scanf("%f", &totalTax);
  printf("Enter how many tenants: \n");
  scanf("%d", &totalTenants);
  taxPerPerson = totalTax / totalTenants;
  printf("Total per person: %.2f\n", taxPerPerson); 

  return 0;
}

