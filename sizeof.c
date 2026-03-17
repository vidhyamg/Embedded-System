#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
int variable=0;

printf("%u\n",sizeof(variable));
printf("%u\n",sizeof(int));
printf("%u\n",sizeof(long int));
printf("%u\n",sizeof(long long int));
printf("%u\n",sizeof(char));
printf("%u\n",sizeof(int16_t));
printf("%u\n",sizeof(int32_t));
printf("%u\n",sizeof(int64_t));
printf("%u\n",sizeof(123 && 456));
printf("%u\n",sizeof(123LL && 456LL));
return 0;
}
