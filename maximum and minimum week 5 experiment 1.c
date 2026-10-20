
#include <stdio.h>
void main()
{
    int a, b, c, d, max, min;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
   max = min = a;
   if (b > max)
        max = b;
    else if (b < min)
        min = b;
   if (c > max)
        max = c;
    else if (c < min)
        min = c;
   if (d > max)
        max = d;
    else if (d < min)
        min = d;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}









    