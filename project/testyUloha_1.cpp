// Copyright 2005, Google Inc.
// All rights reserved.

#include <iostream>
#include "gtest/gtest.h"

#include "1_Student.h"

using namespace ::testing;

//Uloha 1.
TEST(TestPrvejUlohy, isDelimiter) {
  ASSERT_TRUE(isDelimiter(' '));
  ASSERT_TRUE(isDelimiter('.'));
  ASSERT_TRUE(isDelimiter(';'));
  ASSERT_TRUE(isDelimiter(']'));
}

TEST(TestPrvejUlohy, noDelimiter) {
  ASSERT_FALSE(isDelimiter('a'));
  ASSERT_FALSE(isDelimiter('\n'));
  ASSERT_FALSE(isDelimiter('\0'));
}

TEST(TestPrvejUlohy, findCharacterNull) {
  std::string temp("");
  ASSERT_EQ(temp, findNthOccurrence(nullptr, 'a', 1));
}

TEST(TestPrvejUlohy, findCharacterA) {
  std::string temp("A");
  ASSERT_EQ(temp, findNthOccurrence("A", 'A', 1));
}

TEST(TestPrvejUlohy, findCharacterAOut) {
  std::string temp("");
  ASSERT_EQ(temp, findNthOccurrence("A", 'A', 2));
  ASSERT_EQ(temp, findNthOccurrence("A", 'A', 0));
}

TEST(TestPrvejUlohy, findNoCharacter) {
  std::string temp("A");
  ASSERT_NE(temp, findNthOccurrence("A", ' ', 1));
}

TEST(TestPrvejUlohy, findCharacterIn) {
  std::string temp("som to nasiel");
  ASSERT_EQ(temp, findNthOccurrence("Ale som to nasiel", 's', 1));
}

TEST(TestPrvejUlohy, findSecondSpace) {
  std::string temp(" to nasiel");
  ASSERT_EQ(temp, findNthOccurrence("Ale som to nasiel", ' ', 2));
}

TEST(TestPrvejUlohy, findLastSpace) {
  std::string temp(" nasiel");
  ASSERT_EQ(temp, findNthOccurrence("Ale som to predsa nasiel", ' ', 4));
}

TEST(TestPrvejUlohy, findCharacterLast) {
  std::string temp("l");
  ASSERT_EQ(temp, findNthOccurrence("Ak som to nasiel", 'l', 1));
}

TEST(TestPrvejUlohy, findCharacterEnd) {
  std::string temp("");
  ASSERT_EQ(temp, findNthOccurrence("Ak som to nasiel", '\0', 1));
}

TEST(TestPrvejUlohy, prazdnyDruhy) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord(nullptr, 2));
}

TEST(TestPrvejUlohy, DruheJe) {
    std::string temp("je to? ");
    ASSERT_EQ(temp, findNthWord("Co je to? ", 2));
}

TEST(TestPrvejUlohy, DruhePoDel) {
    std::string temp("je to?????? ");
    ASSERT_EQ(temp, findNthWord(" ., ; () !!!!!!!!!!!!!!! Co je to?????? ", 2));
}

TEST(TestPrvejUlohy, JednoMalo) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("Samota", 2));
}

TEST(TestPrvejUlohy, DruheSMedzerami) {
    std::string temp("Samota");
    ASSERT_EQ(temp, findNthWord("     Dlha              Samota", 2));
}

TEST(TestPrvejUlohy, DruheSVykricnikmi) {
    std::string temp("Samota!!!!!!!!!!!!!!");
    ASSERT_EQ(temp, findNthWord("    Hadava               Samota!!!!!!!!!!!!!!", 2));
}

TEST(TestPrvejUlohy, DvePismena) {
    std::string temp("B");
    ASSERT_EQ(temp, findNthWord("A B", 2));
}

TEST(TestPrvejUlohy, odSlova0) {
    ASSERT_EQ("Pravda", findNthWord("Pravda", 1));
}

TEST(TestPrvejUlohy, zaporneSlovo) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("Pravda", -3));
}

TEST(TestPrvejUlohy, nullptr1) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord(nullptr, 1));
}

TEST(TestPrvejUlohy, odSlova1) {
    std::string temp("to je zac? Snad nie toto!!!!");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", 2));
}

TEST(TestPrvejUlohy, odSlovaZaciatku) {
    std::string temp("Co to je zac? Snad nie toto!!!!");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", 1));
}

TEST(TestPrvejUlohy, odMedzeryAZaciatku) {
    std::string temp("Co to je zac? Snad nie toto!!!!");
    ASSERT_EQ(temp, findNthWord("  .  .. Co to je zac? Snad nie toto!!!!", 1));
}

TEST(TestPrvejUlohy, odSlovaMinus1) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", -1));
}

TEST(TestPrvejUlohy, odSlova6) {
    std::string temp("toto!!!!");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", 7));
}

TEST(TestPrvejUlohy, odSlova7SoZatvorkou) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", 8));
}

TEST(TestPrvejUlohy, odSlova25) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("Co to je zac? Snad nie toto!!!!", 25));
}

TEST(TestPrvejUlohy, odPrazdneho0) {
    std::string temp("");
    ASSERT_EQ(temp, findNthWord("", 1));
}

TEST(TestPrvejUlohy, odSlovaC) {
    std::string temp("D");
    ASSERT_EQ(temp, findNthWord("C D", 2));
}

TEST(TestPrvejUlohy, odSlova0C) {
    std::string temp("C C");
    ASSERT_EQ(temp, findNthWord("C C", 1));
}

TEST(TestPrvejUlohy, odSlovaZaciatok) {
    std::string temp("Co je ? ");
    ASSERT_EQ(temp, findNthWord("Co je ? \0 Snad nie !!!! C", 1));
}

TEST(TestPrvejUlohy, odSlova2) {
    std::string temp("Snad nie !!!! C");
    ASSERT_EQ(temp, findNthWord("Co je ? Snad nie !!!! C", 3));
}

TEST(TestPrvejUlohy, VelmiDlhyText10krat) {
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
                  "Many desktop publishing packages and web page editors now use Lorem Ipsum as their"
                  "default model text, and a search for lorem ipsum will uncover many web sites still "
                  "in their infancy.Various versions have evolved over the years, sometimes by accident, "
                  "sometimes on purpose(injected humour and the like).";
    std::string temp("injected humour and the like).");
    ASSERT_EQ(temp, findNthWord(text, 726));
}

TEST(TestPrvejUlohy, zatvorkyGulate) {
    std::string temp("toto)? Snad nie !!!! C");
    ASSERT_EQ(temp, findNthWord("Co je (toto)? Snad nie !!!! C", 3));
}

TEST(TestPrvejUlohy, zatvorkyHranate) {
    std::string temp("Takto ] Snad nie !!!! C");
    ASSERT_EQ(temp, findNthWord("Co je toto? [ Takto ] Snad nie !!!! C", 4));
}

