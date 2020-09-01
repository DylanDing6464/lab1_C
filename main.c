#include "stdio.h"
int main(void) {
  double cel, fahr;
        printf( "Enter temperature in celsius: " );
        scanf( "%lf", &cel );
        fahr = ( 9.0 / 5.0 ) * cel + 32;
        printf( "%.0f° in Celsius is equivalent to %.1f°\n", cel, fahr );


 return 0;

}