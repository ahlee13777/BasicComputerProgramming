#include <stdio.h>

int main(){

    int  si = 10;
    printf("%d\n", si); 

    unsigned int    ui = 10;
    printf("%u\n", ui); 

    int sa;
    int sb;
    int sc;
    
    sa = 0;
    sb = 0;
    sc = 0;
    printf("%d\n", sa * sb * sc); 

    sa = 100000;
    sb = 100000;
    sc = 100000;
    printf("%d\n", sa * sb * sc); 

    sa = -100000;
    sb = -100000;
    sc = -100000;
    printf("%d\n", sa * sb * sc); 

    unsigned int    ua;
    unsigned int    ub;
    unsigned int    uc;

    ua = 1;
    ub = 1;
    uc = 1;
    printf("%u\n", ua * ub * uc); 

    ua = 100000;
    ub = 100000;
    uc = 100000;
    printf("%u\n", ua * ub * uc); 

    ua = -100000;
    ub = -100000;
    uc = -100000;
    printf("%u\n", ua * ub * uc); 

    return 0;
}