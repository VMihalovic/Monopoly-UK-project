#include "3_Methods.h"

//3.uloha
const double *findMaximum(const double data[], size_t count) {
    if (data == nullptr) return &EMPTY_DOUBLE;

    const double *first_max = data;
    for (size_t i = 0; i < count; i++){
        if (*first_max < *data)
            first_max = data;
        data++;
    }
  return first_max;
}

const char *selectWords(const char *text, char *listOfWords
                                , const int listOfOrders[], int numberOfOrders) {

    if (text == nullptr or listOfWords == nullptr)
        return EMPTY_WORD;

    if (numberOfOrders == 0 || *text == '\0') {
        *listOfWords = '\0';
        return listOfWords;
    }
    *listOfWords = '\0';

    const int *order = listOfOrders;
    for( int i = 0; i < numberOfOrders; i++){
        char word[MAX]="\0";
        copyNthWord(text, word, *order );
        if (word[0] != '\0' ) {
            if ( i != 0)
                strcat(listOfWords, ",");
            strcat(listOfWords, word);
        }
        order++;
    }
    return listOfWords;
}
