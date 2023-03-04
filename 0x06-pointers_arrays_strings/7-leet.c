#include <stdio.h>

/**
 * *leet - a function that encodes a string
 *
 * Return: a string
 */
char *leet(char *str) {
    int i, j;
    char leet_map[256] = {0};
    char *leet_chars = "AaEeOoTtLl";
    char *leet_replacements = "44330711";

    for (i = 0; leet_chars[i] != '\0' && leet_replacements[i] != '\0'; i++) {
        leet_map[(int) leet_chars[i]] = leet_replacements[i];
    }

    for (i = 0; str[i] != '\0'; i++) {
        j = (int) str[i];
        j = (leet_map[j] != 0) ? leet_map[j] : j;
        str[i] = (char) j;
    }

    return (str);
}
