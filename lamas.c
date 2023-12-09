
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;

    // initial population
    printf("Insert initial population: ");
    scanf("%d", &a);
    printf("\n");

    // target population
    printf("Insert target population: ");
    scanf("%d", &b);
    printf("\n");

    if (b<a)
    {
        printf("Initial population greater than target\n");
        return 0;
    }

    // Percent of the current population that is goind to be added at the end of the year
    double p = 1.0 / 12.0;
    double n;
    n = log(b / a) / log(1 + p);
    n = ceil(n);
    printf("Year: ");
    printf("%i\n", (int) n);
    printf("\n");
    printf("\n");

    return 0;
}
