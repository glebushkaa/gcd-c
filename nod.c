#include <stdio.h>

#define MAX_FIELDS 2

int gcd(int x, int y);
int abs(int number);

int main()
{
    int x, y, result, fields;

    printf("Input x and y: ");
    fields = scanf("%i %i", &x, &y);

    if (fields != MAX_FIELDS)
    {
        printf("Invalid values");
        return 1;
    }

    result = gcd(x, y);
    printf("Result: %d", result);
}

int abs(int number)
{
    if (number >= 0) return number;
    return number * -1;
}

int gcd(int x, int y)
{
    int divider = 1;
    int _x = abs(x);
    int _y = abs(y);
    if (_x == 0) return y;
    if (_y == 0) return x;
    for (int i = 1; i <= _x && i <= _y; i++)
    {
        if (x % i != 0 || y % i != 0) continue;
        divider = i;
    }
    return divider;
}