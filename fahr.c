#include <stdio.h>
//prints fahrenheit-celcius table
int main(void)
{
int fahr;

for (fahr = -50; fahr <= 120; fahr = fahr +5)
{
printf("f -%3d c - %6.1f\n", fahr, (5.0/9.0)*(fahr-32)); //%d is a decimal integer (integer)
}
}