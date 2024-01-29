#include "4_LoadCards.h"

//4.uloha
void toLower(char *word) {
    while(*word != '\0'){
        if (63 < *word && *word < 91)
            *word += 32;
        word++;
    }
}

void sortWords(char *listOfWords[], int count) {
    qsort(listOfWords, count, sizeof(char *), compareTwoWords);
}

void sortWordsInSmall(char *listOfWords[], int count) {
    qsort(listOfWords, count, sizeof(char *), compareTwoWordsInSmall);
}

int compareTwoWords(const void *a, const void *b) {
    const char *first = *(const char *const *) a;
    const char *second = *(const char *const *) b;
    return strcmp(first , second);
}

int compareTwoWordsInSmall(const void *a, const void *b) {
    const char *first = *(const char *const *)a;
    const char *second = *(const char *const *)b;

    char lowerFirst[strlen(first) + 1];
    char lowerSecond[strlen(second) + 1];

    strcpy(lowerFirst, first);
    strcpy(lowerSecond, second);

    toLower(lowerFirst);
    toLower(lowerSecond);

    return strcmp(lowerFirst, lowerSecond);
}




