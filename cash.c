#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main()
{
    float dollars;
    unsigned cents, i, num, count = 0, currencies[] =  {25, 10, 5, 1};

    // prpmpting for input of change owed
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    // converting to cents
    cents = round(dollars * 100);

    // counting the num of coins to be returned
    for (i = 0; i < 4; i++)
    {
        num = cents / currencies[i];
        count += num;
        cents -= num * currencies[i];
    }

    printf("%i\n", count);
}