#include<stdio.h>
#include<stdlib.h>
/*
-----bit selector------


goal:
N,M design variables
make a selector that bits [N:M] included
check selection menus
[0:3],result = 0x000D
[4:7,result = 0x000c
[12:15],reult 0x000A

0b1111 =15 =2^4 -1
0b0111 = 7 =2^3 -1
0b0011 = 3 =2^2 -1
0b0001 =1 = 2^1 -1

W=eidth of bitmask
bitmask = 2^W - 1

{0:1]-->W =2 bits
[N:M]-->W=M-N +1

2^W =1 << W

bitmask=2^W -1 =(1<< W) -1
*/

int main()
{

    printf("\n==Bit Selector\n");

    unsigned data = 0xABCD;
    unsigned N=4;
    unsigned M=7;
    unsigned W = M -N +1;
    unsigned bitmask =(1<< W) - 1;
    unsigned result = (data >> N) & bitmask;

    //unsigned result =  data >> N & 0b1111;
    printf("data---->0x%04X\n",data);
    printf("result---->0x%04X\n",result);
    return 0;
}