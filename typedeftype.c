
#include<stdio.h>
#include<stdlib.h>

typedef enum 
{
    TEA,             //0
    COFFE,           //1
    JUICE,           //2
    MILK,            //3
}Menu;               //new name starts with capital

int main()
{
    Menu david = COFFE;      //remove enum menu
    Menu jhon = MILK;    
    printf("menu of david..%d\n",david);
    printf("menu of jhon...%d\n",jhon);
    return 0;
}