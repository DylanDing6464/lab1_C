// Author: Dylan Ding dvd5567@psu.com
// Collaborator: William O'Rourke wjo5083@psu.edu
// Collaborator: Alexis Vajda acc5358@psu.edu
// Collaborator: Ashley Jones anj5278@psu.com
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