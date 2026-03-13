
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
    double decimal1digits= 1.23456789;
    double population = 7.801e9;
    double plankconstant = 6.636E-34;
    printf("%12.1f| 1 decimal1digits\n",decimal1digits);
    printf("%12.3f| 3 decimal1digits\n",decimal1digits);
    printf("%12.1f| population,1 digit precision\n",population);
    printf("%12.1e| population,scientific,1 digit precision\n",population);
    printf("%12.3e| population,3 digit precision\n",population);
    printf("%12.3E| plankconstant,3 digit precision\n",plankconstant);
}