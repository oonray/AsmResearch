#include <stdio.h>

extern void shellstart(void);
extern void shellstop(void);

int main(){

    unsigned char *abs_start = (unsigned char *) shellstart;
    unsigned char *start = (unsigned char *) shellstart;
    unsigned char *stop = (unsigned char *) shellstop;
    while(start != stop){
        printf("\\x%02x",*start);
        start++;
    }
    start = abs_start;

    printf("\n{");
    while(start != stop){
        printf("0x%02x,",*start);
        start++;
    }
    printf("};");
    return 0;
}
