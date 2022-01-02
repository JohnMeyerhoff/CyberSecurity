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
void grussSicher()
{
    char name[256] = {0};
    printf("\nWie ist dein Name?:\n");
    gets(name);
    iterate(name);
    printf(name);
    printf(" ich gruesse dich!");
}

void grussJava()
{
    //Scanner sc = new Scanner(System.in);
    //private String name = sc.next();
    //String b;
    //b = name.copy();
    //System.Out.println(name);
}
int main() {
    while(1) {
        gruss();
    }
}
