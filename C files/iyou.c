#include <stdio.h>
#include <stdlib.h>
#include "iyou.h"

int main(int argc, char *argv[]) {
    char* str;
    if (argc == 2) {
        str = argv[1];
    } else {
        scanf("%s", str);
    }
    iyou(str);
}