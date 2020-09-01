#include "stdio.h"
#include "readline/readline.h"
#include "stdlib.h"

int main(void) {
  char *name = readline("Enter temperature in celsius: ");
  double tC = atof(name);
  double tF = tC*9/5 +32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", tC, tF); 
  return 0;
}