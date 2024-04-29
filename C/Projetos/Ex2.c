//ex2
//calcular área:

#include <stdio.h>
#include <math.h>

int main(void)
{
float b1, b2, h, area;
b1 = 6.0;
b2 = 8.0;
h = 5.0;
area = ((b1 + b2) / 2.0 * h);
int area2 = (int)area;
printf("%i\n",area2);
}

