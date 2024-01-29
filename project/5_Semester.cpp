#include "5_Semester.h"
#include <iostream>

//5.uloha


//listOfWords obsahuje pole reťazcov a count určuje počet slov v poli.
//Usporiadajte pole reťazcov od najmenšieho, pričom pri porovnávaní zameňte
//veľké písmená za malé a slová začínajúce na ch umiestnite až za slová
//začínajúce na h. Na usporiadanie môžete použiť funkciu qsort.
//Inšpirujte sa predchádzajúcimi usporiadaniami.


void sortWordsInSmallAndCh(char *listOfWords[], int count) {
    qsort(listOfWords, count, sizeof(char *), compareTwoWordsSpecial);
}

int compareTwoWordsSpecial(const void *a, const void *b) {
    const char *first = *(const char *const *)a;
    const char *second = *(const char *const *)b;

    char lowerFirst[strlen(first) + 1];
    char lowerSecond[strlen(second) + 1];

    strcpy(lowerFirst, first);
    strcpy(lowerSecond, second);

    toLower(lowerFirst);
    toLower(lowerSecond);

    if ((*lowerFirst == 'c' ) && *(lowerFirst + 1) == 'h' && 99 <= *lowerSecond && *lowerSecond < 105 and *(lowerSecond +1 ) != 'h') {
        return 1;
    }
    if ((*lowerSecond == 'c' ) && *(lowerSecond + 1) == 'h' && 99<= *lowerFirst && *lowerFirst < 105 and *(lowerFirst +1 ) != 'h') {
        return -1;
    }

    return strcmp(lowerFirst, lowerSecond);
}


const char *sortAccordingToFunction(const char *text, char *output, void sortingFunction(char *arraysOfText[], int count)) {
    if (text == nullptr || output == nullptr || *text == '\0')
        return "";
    *output = '\0';

    int rows = numberOfWords(text), cols = MAX;
    char **words;
    words = new char *[rows];
    for (size_t i = 0; i < rows; i++) {

        words[i] = new char[cols]; // alokujeme vnútorné pole integerov
    }
    for (int i = 1; i <= rows; i++){
        copyNthWord(text,words[i-1],i);
    }
    sortingFunction(words, rows);

    for( int i = 0; i < rows; i++){
        if ( i != 0)
            strcat(output, ",");
        strcat(output, words[i]);
    }

    //mazanie pola
    for (size_t i = 0; i < rows; i++) {
        delete [] words[i]; // uvoľníme vnútorné polia integerov
    }
    delete [] words;

    return output;
}
