#include <stdio.h>

extern void shellstart(void);
extern void shellstop(void);

int main(){
    unsigned char *start = (unsigned char *) shellstart;
    unsigned char *stop = (unsigned char *) shellstop;
    while(start != stop){
        printf("%02x",*start);
        start++;
    }
    return 0;
}
