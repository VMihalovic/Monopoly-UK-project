#pragma once
#include <stdlib.h> /* qsort */

#include "3_Methods.h"

//4.uloha
void toLower(char *word);
void sortWords(char *listOfWords[], int count);
void sortWordsInSmall(char *listOfWords[], int count);
int compareTwoWords(const void *a, const void *b) ;
int compareTwoWordsInSmall(const void *a, const void *b) ;
