#include <stdio.h>
#include <stdlib.h>

void check(char *buf){
    for(char c = *buf++; c != '\x00'; c = *buf++) {
        if(c=='A') {
            printf("Hacker blockiert!\n");
            exit(-1);
        }
    }
}

void gruss()
{
    char buf[256] = {0};
    printf("\nWie ist dein Name?:\n");
    gets(buf);
    check(buf);
    printf(buf);
    printf(" ich gruesse dich!");
}
void grussSicher()
{
    char buf[256] = {0};
    printf("\nWie ist dein Name?:\n");
    gets(buf);
    check(buf);
    printf(buf);
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
int main(int argc, char* argv[]) {
    while(1) {
        gruss();
    }
}
