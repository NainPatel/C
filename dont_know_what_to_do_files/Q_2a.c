#include <stdio.h>
int main()
{
   int x, a, b, c, d;
   do
   {
      scanf("%d", &x);
      a = x / 1000;
      b = (x - a * 1000) / 100;
      c = (x - a * 1000 - b * 100) / 10;
      d = (x - a * 1000 - b * 100 - c * 10);
   } while ((a + b) != (d * c));
   printf("%d", a + b + c + d);
   return 0;
}