#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decode.h"

int main() {
    char *result = decode_morse(".... . -.--   .--- ..- -.. .");

    printf("The result is: %s \n", result);
    return 0;
}