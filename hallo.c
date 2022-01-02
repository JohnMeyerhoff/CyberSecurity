#include <stdio.h>
#include <stdlib.h>

void iterate(char* name) {
    for(char n = *name++; n != '\x00'; n = *name++);
}

void gruss() {
    char name[256] = {0};
    printf("\nWie ist dein Name?:\n");
    gets(name);
    iterate(name);
    printf(name);
    printf(" ich gruesse dich!");
}

int main() {
    while(1) {
        gruss();
    }
}
