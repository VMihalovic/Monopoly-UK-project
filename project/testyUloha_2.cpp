// Copyright 2005, Google Inc.
// All rights reserved.

#include <iostream>
#include "gtest/gtest.h"

using namespace ::testing;

#include "2_Cards.h"

TEST(TestDruhejUlohy, numberOfWords5) {
    ASSERT_EQ(5, numberOfWords("Co to je?   Za  co!!!!!?!. "));
}

TEST(TestDruhejUlohy, numberOfWords7) {
    ASSERT_EQ(7, numberOfWords("Co to je?  Za (iba) to  co!!!!!?!. "));
}

TEST(TestDruhejUlohy, numberOfWords6) {
    ASSERT_EQ(6, numberOfWords("  Co?   Oooo!!! !! Je  za co?? Kolko ? "));
}

TEST(TestDruhejUlohy, numberOfWords1) {
    ASSERT_EQ(1, numberOfWords("C"));
}

TEST(TestDruhejUlohy, empty) {
    ASSERT_EQ(0, numberOfWords(""));
}

TEST(TestDruhejUlohy, numberOfWords0) {
    ASSERT_EQ(0, numberOfWords(".. ?? ::;"));
}

TEST(TestDruhejUlohy, numberOfNumbers) {
    ASSERT_EQ(5, numberOfWords("12345 54321 12 21 111"));
}

TEST(TestDruhejUlohy, numberOfWordsWithNonLetters) {
    ASSERT_EQ(3, numberOfWords(" Ako\n sa mas? \0Ved to je drina!!!!!"));
}

TEST(TestDruhejUlohy, numberOfWordsWithNonLetters2) {
    ASSERT_EQ(6, numberOfWords(" Ako\nsa mas?\tVed to je drina!!!!!"));
}

TEST(TestDruhejUlohy, numberOfWordsShort) {
    char textShort[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
                       "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
                       "unknown printer took a galley of type and scrambled it to make a type specimen book. "
                       "It has survived not only five centuries, but also the leap into electronic typesetting, "
                       "remaining essentially unchanged. It was popularised in the 1960s with the release of "
                       "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
                       "publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    ASSERT_EQ(90, numberOfWords(textShort));
}

TEST(TestDruhejUlohy, numberOfWordsNormalny) {
    char text[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
                  "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
                  "unknown printer took a galley of type and scrambled it to make a type specimen book. "
                  "It has survived not only five centuries, but also the leap into electronic typesetting, "
                  "remaining essentially unchanged. It was popularised in the 1960s with the release of "
                  "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
                  "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

                  "It is a long established fact that a reader will be distracted by the readable content "
                  "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                  "more - or - less normal distribution of letters, as opposed to using "
                  "Content here, content here, making it look like readable English. "
                  "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                  "default model text, and a search for lorem ipsum will uncover many web sites still "
                  "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                  "sometimes on purpose(injected humour and the like)."
                  "It is a long established fact that a reader will be distracted by the readable content "
                  "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                  "more - or - less normal distribution of letters, as opposed to using "
                  "Content here, content here, making it look like readable English. "
                  "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                  "default model text, and a search for lorem ipsum will uncover many web sites still "
                  "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                  "sometimes on purpose(injected humour and the like)."
                  "It is a long established fact that a reader will be distracted by the readable content "
                  "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                  "more - or - less normal distribution of letters, as opposed to using "
                  "Content here, content here, making it look like readable English. "
                  "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                  "default model text, and a search for lorem ipsum will uncover many web sites still "
                  "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                  "sometimes on purpose(injected humour and the like).";
    ASSERT_EQ(411, numberOfWords(text));
}

TEST(TestDruhejUlohy, numberOfWordsLong) {
    char textLong[] =
            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."
            "It is a long established fact that a reader will be distracted by the readable content "
            "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
            "more - or - less normal distribution of letters, as opposed to using "
            "Content here, content here, making it look like readable English. "
            "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
            "default model text, and a search for lorem ipsum will uncover many web sites still "
            "in their infancy.Various versions have evolved over the years, sometimes by accident, "
            "sometimes on purpose(injected humour and the like)."

            "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
            "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
            "unknown printer took a galley of type and scrambled it to make a type specimen book. "
            "It has survived not only five centuries, but also the leap into electronic typesetting, "
            "remaining essentially unchanged. It was popularised in the 1960s with the release of "
            "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
            "publishing software like Aldus PageMaker including versions of Lorem Ipsum."
    ;
    ASSERT_EQ(2145, numberOfWords(textLong));
}

TEST(TestDruhejUlohy, numberOfWordsIs7) {
    ASSERT_EQ(7, numberOfWords("Co to je zac? Snad nie toto!!!!"));
}

TEST(TestDruhejUlohy, VratCele) {
  char *word = new char[256];
  std::string temp("Pravda");
  ASSERT_EQ(temp, copyNthWord("Pravda", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, PrazdnyRetazec) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord(nullptr, word, 0));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, PrazdnyWord) {
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("Pravda", nullptr, 0));
}

TEST(TestDruhejUlohy, PrazdneOba) {
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord(nullptr, nullptr, 0));
}

TEST(TestDruhejUlohy, nuloveSlovo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord(nullptr, word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, ZiadneSlovo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("  ,,,, .... !!!!", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, prazdneSlovo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, to) {
  char *word = new char[256];
  std::string temp("to");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 2));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, Co) {
  char *word = new char[256];
  std::string temp("Co");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, MedzeraCo) {
  char *word = new char[256];
  std::string temp("Co");
  ASSERT_EQ(temp, copyNthWord(" .   Co to je zac? Snad nie toto!!!!", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, minusPrveSlovo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, -1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, NulteSlovo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 0));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, toto) {
  char *word = new char[256];
  std::string temp("toto");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 7));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, mimo) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 8));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, mimoVelmi) {
  char *word = new char[256];
  std::string temp("");
  ASSERT_EQ(temp, copyNthWord("Co to je zac? Snad nie toto!!!!", word, 20));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, C) {
  char *word = new char[256];
  std::string temp("Q");
  ASSERT_EQ(temp, copyNthWord("C A Q", word, 3));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, prveC) {
  char *word = new char[256];
  std::string temp("C");
  ASSERT_EQ(temp, copyNthWord("C A C", word, 1));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, Snad) {
  char *word = new char[256];
  std::string temp("nie");
  ASSERT_EQ(temp, copyNthWord("Co je ? Snad nie !!!! C", word, 4));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, posledneC) {
  char *word = new char[256];
  std::string temp("F");
  ASSERT_EQ(temp, copyNthWord("Co je ? Snad nie !!!! F", word, 5));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, AD) {
  char *word = new char[256];
  std::string temp("AD");
  ASSERT_EQ(temp, copyNthWord(" F E G AD C B  ", word, 4));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, VelmiDlhyTextSlovo) {
  char text[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry."
                                                                          "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an "
                                                                          "unknown printer took a galley of type and scrambled it to make a type specimen book. "
                                                                          "It has survived not only five centuries, but also the leap into electronic typesetting, "
                                                                          "remaining essentially unchanged. It was popularised in the 1960s with the release of "
                                                                          "Letraset sheets containing Lorem Ipsum passages, and more recently with desktop"
                                                                          "publishing software like Aldus PageMaker including versions of Lorem Ipsum."

                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and page editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like)."
                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like)."
                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like)."

                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and page editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like)."
                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like)."
                                                                          "It is a long established fact that a reader will be distracted by the readable content "
                                                                          "of a page when looking at its layout.The point of using Lorem Ipsum is that it has a "
                                                                          "more - or - less normal distribution of letters, as opposed to using "
                                                                          "Content here, content here, making it look like readable English."
                                                                          "Many desktop publishing packages and  editors now use Lorem Ipsum as their"
                                                                          "default model text, and a search for lorem ipsum will uncover many web sites still "
                                                                          "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                                                                          "sometimes on purpose(injected humour and the like).";
  auto pocet = numberOfWords(text);
  ASSERT_EQ(pocet, 728);
  char *word = new char[256];
  std::string temp("their");
  ASSERT_EQ(temp, copyNthWord(text, word, 709));
  temp = "infancy";
  ASSERT_EQ(temp, copyNthWord(text, word, 710));
  if (word != nullptr) {
    delete[] word;
  }
}

TEST(TestDruhejUlohy, CistyKod) {
  char *word = new char[256];
  std::string temp("druhy");
  ASSERT_EQ(temp, copyNthWord("prvy druhy treti", word, 2));
  if (word != nullptr) {
    delete[] word;
  }
}
