#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decode.h"

const char *morse[MAX] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[MAX] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

char *decode_morse(const char* morse_code) {
    // iterate over the word given as parameter
    // stop looping when we reach the null-character.
    char msg[WORDS][MAX];
    int words = 0;

    size_t i = 0;
    while (morse_code[i] != '\0') {
        if(morse_code[i] != ' ') {
            // append morse_code[i] to msg[WORDS]
        } else {
            // count the number of words
            words++;
        }
        // printf("%c\n", morse_code[i]);
        i++;
    }

    printf("Where are %d words\n", words);

    return ascii[0];
}

/*
strcpy(msg[0], "Hello");
strcpy(msg[1], "Hi");

printf("The message is:\n");
for(int j = 0; j < 2; j++) {
	printf(" %s\n", msg[j]);
}
*/