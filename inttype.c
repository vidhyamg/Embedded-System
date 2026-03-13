#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
    unsigned students = 25;
    unsigned long long population = 123456789000000LLU;
    printf("%12u| students\n",students);
    printf("%12llu population\n",population);
    uint8_t count=UINT8_MAX;
    printf("%12u | count of something\n",count);
    count=count+1;
    printf("%12u count of something + 1\n",count);
    printf("%12d INT32_MAX\n",INT32_MAX);
    printf("%12d INT32_MIN\n",INT32_MIN);
    printf("%12u UINT32_MIN\n",UINT32_MAX);
    return 0;

}