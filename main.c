#include "stdio.h"
#include "readline/readline.h"
#include "stdlib.h"

int main(void) {
 char *name = readline("Enter temperature in Celsius: ");
double tC = atof(name);
double tF = tC*9/5 +32;
printf("%f° in celsius is equivalent to %f° Fahrenheit.\n", tC, tF); 
 
 return 0;
}