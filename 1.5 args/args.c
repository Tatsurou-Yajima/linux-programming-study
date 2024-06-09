#include <stdio.h>
#include <stdlib.h> // exit関数を使うのに必要

int
main(int argc, char *argv[])
{
    int i;

    printf("argc=%d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    exit(0);
}

// ビルドコマンド
// gcc -o args args.c
