#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c = 'A';
    printf("char c: %d\n",c);
    printf("char c: %c\n",c);
    c=66;
    printf("char c:%c\n",c);
    //input a charcter
    printf("input a character:");
    c=getchar();
    printf("you entered: %c\n",c);
    c=getchar();
    printf("you entered: %c\n",c);
    return 0;
}
