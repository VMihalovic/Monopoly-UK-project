#pragma once

#include <cstring> /* strcmp */

#include <iostream>
#include <string>
#include <vector>

#include "2_Cards.h"
using namespace std;

// 1st part
class MonopolyMessage : public std::exception {
    std::string text;
public:
    MonopolyMessage(const char *v) { text = v; };
    std::string message() const { return text; };
};

class MonopolyError : public std::exception {
    std::string text;
public:
    MonopolyError(const char *v) { text = v; };
    std::string message() const { return text; };
};


class Student {
private:
    string name;
    int energy;
    std::vector<Subject> doneSubjects;
    int creditCount;
    Card* actCard = nullptr;
    int weekCounter;
    Student(string &studentName) : energy(500), name(studentName),
                                    creditCount(0),weekCounter(1) {

    }

    void addSubject(Subject subject) { doneSubjects.push_back(subject); }
public:

    std::string getName() { return name; }
    int getPosition();
    int getEnergy() { return energy; }
    void changeEnergy(int time) { energy += time; }
    int getCredits() { return creditCount; }
    Card makeStep(int step);
    bool passSubject(Subject& subject);
    bool payForHomework(Student& student, Subject& subject);
};
